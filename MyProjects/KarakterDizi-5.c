main(){

	char harf;
    char cumle[100];
	printf("bir cumle giriniz:");
	gets(cumle);
	printf("aranacak harfi giriniz:");
	scanf("%c",&harf);
	
	int i;	
	int sayac=0;
	for(i=0;cumle[i]!='\0';i++){
		if(cumle[i]==harf){
			sayac++;
		}
	}
	
	if(sayac==0){
		printf("aranan karakter bulunamadi!");
	}
	else {
		printf("%d adet bulundu.",sayac);	
	}	
}
