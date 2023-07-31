//Girilen sayilari diziye aktardýktan sonra, 
//bu diziyi baþka bir diziye tersten kopyalayýp yazdýrma:
//2,4,1,8 -> 8,1,4,2
main(){
	int dizi[5];
	int tersDizi[5];
	int i;
	for(i=0;i<5;i++){
		printf("sayi gir:");
		scanf("%d",&dizi[i]);
	}
//	tersDizi[0]=dizi[4];
//	tersDizi[1]=dizi[3];
//	tersDizi[2]=dizi[2];
//	tersDizi[3]=dizi[1];
//	tersDizi[4]=dizi[0];
	int j=0;
	//diziyi tersten okuyup kopyala:
	for(i=4;i>=0;i--){ 
		tersDizi[j]=dizi[i];
		j++; 
	}
	
	//kopyalanan diziyi yazdýr
	for(i=0;i<5;i++){ 
		printf("%d \n",tersDizi[i]);
	}
	
}
