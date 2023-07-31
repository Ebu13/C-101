int main(){
	//Dizideki bir elemaný deðiþtirme:
	int dizi[]={3,7,1,2,0}; //diziyi baþlangýç deðeri vererek oluþturuyor
	
	//dizi yazdýrýlýyor:
	int i;
	for(i=0;i<5;i++){
		printf("%d ",dizi[i]);
	}
	//deðiþecek elemanýn konumu ve yeni deðeri alýnýyor:
	int konum,sayi;
	printf("\nDizinin degisecek indeksini giriniz:");
	scanf("%d",&konum);
	printf("yeni degeri giriniz:");
	scanf("%d",&sayi);
	
	dizi[konum]=sayi;	//yeni konuma yeni deðer atamasý yapýlýyor
	
	//dizinin son hali tekrar yazdýrýlýyor:
	printf("\nDizinin yeni hali:");
	for(i=0;i<5;i++){
		printf("%d ",dizi[i]);
	}
	
}
