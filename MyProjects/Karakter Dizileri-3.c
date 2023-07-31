//Karakter Dizileri-3
main(){
	//kelimenin döngü kullanýlarak her harfinin yazdýrýlmasý:
	char kelime[10]="yazilim";
	//'y','a','z','i','l','i','m','\0'
	
	printf("karakterler yazdiriliyor:\n");
	int i=0;	
	while(kelime[i]!='\0'){ //kelimenin sonuna gelene kadar dön
		printf("%d.karakter: %c \n",i,kelime[i]);
		i++;
	}
	
}
