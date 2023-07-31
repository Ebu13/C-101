/*
ÖDEV1: Yýðýt ve Kuyruk kullanarak PALÝNDROM kontrolü
*/
#include <stdio.h>

#define MAX 10

int Yigit[MAX];
int top=-1;

int Kuyruk[MAX];
int ilk = -1, son =-1;

//YIÐIT FONKSÝYONLARI:
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

//KUYRUK FONKSÝYONLARI:
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
        if(ilk == -1) //Kuyruk boþken ilk eleman eklendiðinde ilk=0 olmalý
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
        eleman = Kuyruk[ilk];//Çýkarýlacak sayýyý return etmek için eleman deðiþkeninde tutuyoruz
        
		if (ilk == son){     //tek eleman vardýr,-1 yaparak kuyruðu boþalt
            ilk = -1;
            son = -1;
        } 
        else {
            ilk++; //Kaydýrma yapýlmayacaksa Çýkarýrken kuyruðun baþýný arttýr (dizinin sonraki elemanýný göster)           
            
        }        
        //printf("%d cikarildi.\n",eleman);//Burda veya main metodunda yazdýrýlabilir
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
		if(adet%2==1&&i==adet/2){//adet tek sayý ise (5 adet rakam ise orta rakamý almasýn)
						
		}
		else if(i<adet/2){ //ilk yarýsýný Kuyruða ekle (Enqueu)
			KuyrukEkle(rakam);
		}
		else{
			YigitEkle(rakam); //ikinci yarýsýný Yýðýta ekle(Push)
		}
		
		//Not: Farklý bir yöntem olarak Rakamlarýn tümü hem yýðýta hem kuyruða atýlýp sonra çekilerek karþýlaþtýrýlabilir.Yarýsýna bakmak yerine
	}	
	//Kuyruk ve yýðýtý yazdýr:
	KuyrukListele();
	YigitListele();
	
	//1.yöntem: while veya for döngüsü ile karþýlaþtýr
	int sayac=0;
	//while döngüsü kullanýlarak:
//	while(!KuyrukBosMu()){//Kuyruk veya yýðýt boþ deðilse çýkarmaya devam et, boþ ise döngü sonlanýr.(veya !YigitBosMu())
//		if(KuyrukCikar()==YigitCikar())//Kuyruktan çýkarýlan sayý ile yýðýttan çekilen ayný ise sayacý arttýr
//			sayac++;		
//	}
		
	//for döngüsü ile:
//	for(i=0;i<adet/2;i++){
//		if(KuyrukBosMu()||YigitBosMu())//kuyruk veya yýðýt boþ olursa döngüden çýk
//			break;
//		if(KuyrukCikar()==YigitCikar()) //if içinde direk fonksiyonu çaðýrýp return eden sonucu karþýlaþtýr
//			sayac++;
//		//fonksiyon þu þekilde de çaðrýlabilir:
////		int a=KuyrukCikar();
////		int b=YigitCikar();
////		if(a==b)
////			sayac++;
//	}
	
//	if(sayac==adet/2)//sayac deðeri girilen rakam adedinin yarýsý kadar ise palindrom olduðunu gösterir.
//		printf("PALINDROM");
//	else
//		printf("PALINDROM DEGIL");


	//2.yöntem: çýkarýlan sayýlardan eþit olmayan gelirse palindrom degildir
	int sonuc=0;
	while(!KuyrukBosMu()){
		if(KuyrukCikar()!=YigitCikar()){//1 tane eþit olmayan denk gelirse direk döngüden çýk, palindrom deðildir
			printf("PALINDROM DEGIL");
			sonuc=1;
			break;
		}
	}
	if(sonuc==0)//sonuc 1 olmamýþsa if içine girmemiþtir, palindromdur
		printf("PALINDROM");
}
