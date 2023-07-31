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
	
	if(islem=='+'){
		c=a+b;
	}
	else if(islem=='-'){
		c=a-b;
	}
	else if(islem=='*'){
		c=a*b;
	}
	else if(islem=='/'){
		c=a/b;
	}
	else {
		printf("Hatali islem sectiniz!");
	}
	
	printf("sonuc=%d",c);
}
