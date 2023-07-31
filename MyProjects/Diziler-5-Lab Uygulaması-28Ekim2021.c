/*
28.10.2021 tarihli Laboratuvar dersinde yapýlan uygulama:
Klavyeden girilen 4 sayýyý diziye atadýktan sonra dizinin toplamýný, 
ortalamasýný,dizideki en büyük ve en küçük sayýlarý bulan program.
(Dr.Öðr.Üyesi Ahmet Karadoðan)
*/
int main(){
	int dizi[4];//4 elemanlý bir dizi oluþtur
	float toplam=0;
	float ort;
	int i;
	//dizi elemanlarýný kullanýcýdan al:
	for(i=0;i<4;i++){
		printf("%d.sayi giriniz:",i+1);
		scanf("%d",&dizi[i]);//girilen her sayýyý dizinin i.indeksine aktar
		toplam=toplam+dizi[i];//dizi elemanlarýný toplama ekle
	}
	ort=toplam/4;//ortalamayý hesapla
	printf("dizi toplami=%f \n",toplam);
	printf("dizi ortalamasi=%f \n",ort);
	
	//en küçük ve en büyük sayý bul:
	int max=dizi[0];//dizinin ilk elemaný en büyük sayý olarak atansýn
	int min=dizi[0];//dizinin ilk elemaný en küçük sayý olarak atansýn
	for(i=0;i<4;i++){
		if(dizi[i]>max){
			max=dizi[i];//dizide max deðerinden daha büyük sayý varsa yeni max deðeri olarak atansýn
		}	
		if(dizi[i]<min){
			min=dizi[i];//dizide min deðerinden daha küçük sayý varsa yeni min deðeri olarak atansýn
		}	
	}
	printf("en buyuk eleman:%d \n",max);
	printf("en kucuk eleman:%d \n",min);
}
