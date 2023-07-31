main(){
		
	//5 elemanlý dizi oluþturup girilen sayýlarý diziye aktarma ve diziyi yazdýrma:
	int dizi[5];
	int toplam=0;
	int i;
	for(i=0;i<5;i++){
		printf("%d.sayi giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	
	//Dizi elemanlarýný tek tek yazdýrma:
	printf("\nDizideki elemanlar:");
	printf("%d ",dizi[0]);
	printf("%d ",dizi[1]);
	printf("%d ",dizi[2]);
	printf("%d ",dizi[3]);
	printf("%d ",dizi[4]);
	
	//döngü kullanarak dizi elemanlarýný yazdýrma:
	printf("\nDizideki elemanlar(dongu ile):");
	for(i=0;i<5;i++){
		printf("%d ",dizi[i]);//i=0,dizi[0] i=1 dizi[1]
	}		
}
