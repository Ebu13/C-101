int main(){
	//Dizideki bir eleman� de�i�tirme:
	int dizi[]={3,7,1,2,0}; //diziyi ba�lang�� de�eri vererek olu�turuyor
	
	//dizi yazd�r�l�yor:
	int i;
	for(i=0;i<5;i++){
		printf("%d ",dizi[i]);
	}
	//de�i�ecek eleman�n konumu ve yeni de�eri al�n�yor:
	int konum,sayi;
	printf("\nDizinin degisecek indeksini giriniz:");
	scanf("%d",&konum);
	printf("yeni degeri giriniz:");
	scanf("%d",&sayi);
	
	dizi[konum]=sayi;	//yeni konuma yeni de�er atamas� yap�l�yor
	
	//dizinin son hali tekrar yazd�r�l�yor:
	printf("\nDizinin yeni hali:");
	for(i=0;i<5;i++){
		printf("%d ",dizi[i]);
	}
	
}
