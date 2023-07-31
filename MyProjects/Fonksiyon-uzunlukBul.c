//Girilen 2 metnin uzunluklarýný karþýlaþtýrýnýz:

//kelimenin uzunluðunu bulan fonksiyon:
int uzunluk(char metin[]){
	int i=0;
	while(metin[i]!='\0'){
		i++;
	}
	return i;
}

int main(){
	
	char kelime[100],kelime2[50];
	printf("1.kelimeyi giriniz:");
	gets(kelime);
	printf("2.kelimeyi giriniz:");
	gets(kelime2);
	
	//1.yöntem(uzunluklarý ayrý ayrý bulup deðiþkenlere atadýktan sonra karþýlaþtýr):
//	int uz1,uz2;
//	uz1=uzunluk(kelime);//1.kelimenin uzunluðunu bul
//	uz2=uzunluk(kelime2);//2.kelimenin uzunluðunu bul
//	if(uz1==uz2){
//		printf("uzunluklar esit");
//	}
//	else{
//		printf("uzunluklar farkli");
//	}
	
	//2.yöntem(fonksiyonu if içinde çaðýrarak karþýlaþtýr):
	if(uzunluk(kelime)==uzunluk(kelime2)){
		printf("uzunluklar esit");
	}
	else{
		printf("uzunluklar farkli");
	}
	
}


