int main(){
	//Dizi boyutunun(eleman sayýsýnýn) kullanýcý tarafýndan belirlenerek oluþturulmasý:
	int boyut;	
	printf("Dizi eleman sayisini giriniz:");
	scanf("%d",&boyut);
	
	int dizi[boyut];
	
	int i;
	for(i=0;i<boyut;i++){
		printf("%d.sayi gir:",i+1);
		scanf("%d",&dizi[i]);		
	}
	
	//dizinin tüm elemanlarýný listele:
	for(i=0;i<boyut;i++){
		printf("\ndizinin %d.elemani=%d",i+1,dizi[i]);
	}
	
	printf("\n\ndizinin sondan(tersten) yazimi:");
	for(i=boyut-1;i>=0;i--){
		printf("\ndizinin %d.elemani=%d",i+1,dizi[i]);
	}
	
	//dizideki sayýlarýn ortalamasýný hesapla:
	float toplam=0,ort;
	for(i=0;i<boyut;i++){
		toplam=toplam+dizi[i];
	}
	
	ort=toplam/boyut;
	printf("\n\ndizi ortalamasi=%f",ort);
	
}
