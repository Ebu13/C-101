main(){
	
	//4 iþlem yapan program.
	int a,b,c;
	char islem;
	printf("1.sayi giriniz:");
	scanf("%d",&a);
	printf("2.sayi giriniz:");
	scanf("%d",&b);
	printf("islem seciniz(+ - * /) :");
	scanf(" %c",&islem);
	
	switch(islem){
		case '+': c=a+b;
				break;
		case '-': c=a-b;
				break;		
		case '*': c=a*b;
				break;
		case '/': c=a/b;
				break;						
		default:
			printf("Hatali secim yaptiniz!");
		
	}	
	printf("sonuc=%d",c);
}
