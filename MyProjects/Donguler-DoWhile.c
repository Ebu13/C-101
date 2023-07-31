int main(){
	

	int a;
	int toplam=0;
	do{		
		printf("bir sayi giriniz(bitirmek icin -1 giriniz):");
		scanf("%d",&a);
		if(a!=-1)
		toplam=toplam+a;		
		
	}while(a!=-1);
	
	printf("girilen sayilarin toplami=%d",toplam);
}
