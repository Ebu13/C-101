/*
�DEV1: Y���t ve Kuyruk kullanarak PAL�NDROM kontrol�
*/
#include <stdio.h>

#define MAX 10

int Yigit[MAX];
int top=-1;

int Kuyruk[MAX];
int ilk = -1, son =-1;

//YI�IT FONKS�YONLARI:
int YigitDoluMu(){
	if(top==MAX-1)
		return 1;//True
	else
		return 0;//False	
}
int YigitBosMu(){
	if(top==-1)
		return 1;
	else
		return 0;	
}

void YigitEkle(int a){
	if(YigitDoluMu()){
		printf("Yigit DOLU!\n");
	}
	else{
		top++;
		Yigit[top]=a;
		//printf("%d yigit eklendi\n", a);
	}	
}

int YigitCikar(){
	if(YigitBosMu()==1){
		printf("Yigit BOS!\n");
	}
	else{		
		return Yigit[top--];
	}
}
void YigitListele(){
	if(YigitBosMu()==1){
		printf("Yigit BOS!\n");
	}
	else{	
		printf("Yigit: ");
		int i;
		for(i=0;i<=top;i++){
			printf("%d ",Yigit[i]);
		}
		printf("\n");
	}
}

//KUYRUK FONKS�YONLARI:
int KuyrukDoluMu()
{
    if(son == MAX-1) return 1; 
    return 0;
}
int KuyrukBosMu()
{
    if(ilk == -1) return 1;
    return 0;
}
void KuyrukEkle(int eleman)//EnQueue
{
    if(KuyrukDoluMu()) printf("Kuyruk Dolu!! \n");
    else
    {
        if(ilk == -1) //Kuyruk bo�ken ilk eleman eklendi�inde ilk=0 olmal�
			ilk = 0;
        son++;
        Kuyruk[son] = eleman;
        //printf("%d kuyruk eklendi\n", eleman);
    }
}
int KuyrukCikar()//DeQueue
{
    int eleman;
    if(KuyrukBosMu()) {
        printf("Kuyruk Bos !! \n");        
    } else {
        eleman = Kuyruk[ilk];//��kar�lacak say�y� return etmek i�in eleman de�i�keninde tutuyoruz
        
		if (ilk == son){     //tek eleman vard�r,-1 yaparak kuyru�u bo�alt
            ilk = -1;
            son = -1;
        } 
        else {
            ilk++; //Kayd�rma yap�lmayacaksa ��kar�rken kuyru�un ba��n� artt�r (dizinin sonraki eleman�n� g�ster)           
            
        }        
        //printf("%d cikarildi.\n",eleman);//Burda veya main metodunda yazd�r�labilir
        return eleman;
    }
}
void KuyrukListele()
{   
    if(KuyrukBosMu()) printf("Kuyruk Bos!\n");
    else
    {        
        printf("Kuyruk: ");
        int i;
        for( i = ilk; i<=son; i++) {            
			printf("%d ",Kuyruk[i]);
        }
        printf("\n");
    }
}


main(){
	int adet;
	printf("Kac rakam girilecek:");
	scanf("%d",&adet);
	if(adet<2||adet>MAX)
	{	
		printf("En az 2, En fazla %d adet girilebilir!",MAX);
		return;//exit(0);
	}
	printf("Rakamlari giriniz:");
	int i,rakam;
	for(i=0;i<adet;i++){
		scanf("%d",&rakam);
		if(adet%2==1&&i==adet/2){//adet tek say� ise (5 adet rakam ise orta rakam� almas�n)
						
		}
		else if(i<adet/2){ //ilk yar�s�n� Kuyru�a ekle (Enqueu)
			KuyrukEkle(rakam);
		}
		else{
			YigitEkle(rakam); //ikinci yar�s�n� Y���ta ekle(Push)
		}
		
		//Not: Farkl� bir y�ntem olarak Rakamlar�n t�m� hem y���ta hem kuyru�a at�l�p sonra �ekilerek kar��la�t�r�labilir.Yar�s�na bakmak yerine
	}	
	//Kuyruk ve y���t� yazd�r:
	KuyrukListele();
	YigitListele();
	
	//1.y�ntem: while veya for d�ng�s� ile kar��la�t�r
	int sayac=0;
	//while d�ng�s� kullan�larak:
//	while(!KuyrukBosMu()){//Kuyruk veya y���t bo� de�ilse ��karmaya devam et, bo� ise d�ng� sonlan�r.(veya !YigitBosMu())
//		if(KuyrukCikar()==YigitCikar())//Kuyruktan ��kar�lan say� ile y���ttan �ekilen ayn� ise sayac� artt�r
//			sayac++;		
//	}
		
	//for d�ng�s� ile:
//	for(i=0;i<adet/2;i++){
//		if(KuyrukBosMu()||YigitBosMu())//kuyruk veya y���t bo� olursa d�ng�den ��k
//			break;
//		if(KuyrukCikar()==YigitCikar()) //if i�inde direk fonksiyonu �a��r�p return eden sonucu kar��la�t�r
//			sayac++;
//		//fonksiyon �u �ekilde de �a�r�labilir:
////		int a=KuyrukCikar();
////		int b=YigitCikar();
////		if(a==b)
////			sayac++;
//	}
	
//	if(sayac==adet/2)//sayac de�eri girilen rakam adedinin yar�s� kadar ise palindrom oldu�unu g�sterir.
//		printf("PALINDROM");
//	else
//		printf("PALINDROM DEGIL");


	//2.y�ntem: ��kar�lan say�lardan e�it olmayan gelirse palindrom degildir
	int sonuc=0;
	while(!KuyrukBosMu()){
		if(KuyrukCikar()!=YigitCikar()){//1 tane e�it olmayan denk gelirse direk d�ng�den ��k, palindrom de�ildir
			printf("PALINDROM DEGIL");
			sonuc=1;
			break;
		}
	}
	if(sonuc==0)//sonuc 1 olmam��sa if i�ine girmemi�tir, palindromdur
		printf("PALINDROM");
}
