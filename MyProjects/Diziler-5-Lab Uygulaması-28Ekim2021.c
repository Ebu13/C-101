/*
28.10.2021 tarihli Laboratuvar dersinde yap�lan uygulama:
Klavyeden girilen 4 say�y� diziye atad�ktan sonra dizinin toplam�n�, 
ortalamas�n�,dizideki en b�y�k ve en k���k say�lar� bulan program.
(Dr.��r.�yesi Ahmet Karado�an)
*/
int main(){
	int dizi[4];//4 elemanl� bir dizi olu�tur
	float toplam=0;
	float ort;
	int i;
	//dizi elemanlar�n� kullan�c�dan al:
	for(i=0;i<4;i++){
		printf("%d.sayi giriniz:",i+1);
		scanf("%d",&dizi[i]);//girilen her say�y� dizinin i.indeksine aktar
		toplam=toplam+dizi[i];//dizi elemanlar�n� toplama ekle
	}
	ort=toplam/4;//ortalamay� hesapla
	printf("dizi toplami=%f \n",toplam);
	printf("dizi ortalamasi=%f \n",ort);
	
	//en k���k ve en b�y�k say� bul:
	int max=dizi[0];//dizinin ilk eleman� en b�y�k say� olarak atans�n
	int min=dizi[0];//dizinin ilk eleman� en k���k say� olarak atans�n
	for(i=0;i<4;i++){
		if(dizi[i]>max){
			max=dizi[i];//dizide max de�erinden daha b�y�k say� varsa yeni max de�eri olarak atans�n
		}	
		if(dizi[i]<min){
			min=dizi[i];//dizide min de�erinden daha k���k say� varsa yeni min de�eri olarak atans�n
		}	
	}
	printf("en buyuk eleman:%d \n",max);
	printf("en kucuk eleman:%d \n",min);
}
