//Karakter Dizileri - Stringler
main(){
		
	//scanf ve printf kullanarak kelime okuma ve yazdýrma:	
	//NOT: scanf ile tek kelime okunabilir, birden fazla kelime okunamaz
	char kelime[10];
	printf("bir kelime giriniz:");
	scanf("%s",&kelime);	
	printf("girilen kelime:%s \n",kelime);
	
	//2 farklý þekilde karakter dizisi oluþturulabilir:
	char isim[20]={'a','h','m','e','t'};
	char bolum[15]="yazilim";
	
	printf("isim:%s \n",isim);
	printf("bolumu:%s \n",bolum);
	
}
