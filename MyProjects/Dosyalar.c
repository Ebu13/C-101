#include <stdio.h>

void DosyaYaz(){
	FILE *dosya;
	dosya=fopen("C:\\Ornekler\\ornek.txt","w");
	if(dosya==NULL){
		printf("Dosya yazilamadi!");
		exit(0);
	}
	else{
	
		fprintf(dosya,"%s","Sayilar\n");
		fputs("Programlamaya Giris",dosya);
		
		int i;
		for(i=0;i<10;i++){
			fprintf(dosya,"\n%d",i);	
		}
		fclose(dosya);
		printf("Dosyaya yazildi.");
	}
}

void DosyaOku(){
	FILE *dosya;
	dosya=fopen("C:\\Ornekler\\ornek.txt","r");
	if(dosya==NULL){
		printf("Dosya okunamadi!");
		exit(0);
	}
	char kelime[50];
	while(fscanf(dosya,"%s",&kelime)!=EOF){
		printf("%s\n",kelime);
	}
	fclose(dosya);
}

void binaryDosyaYaz(){
	FILE *dosya;
	int sayilar[100];
	int i;
	dosya=fopen("C:\\Ornekler\\ornek.dat","wb");
	for (i=0; i<10; i++)
		sayilar[i] = i;
	fwrite(sayilar, sizeof(sayilar), 1, dosya);
	fclose(dosya);
}

void binaryDosyaOku(){
		FILE *dosya;
		dosya=fopen("C:\\Ornekler\\ornek.dat","rb");
		int sayilar[10];
		int i;
		fread(sayilar,sizeof(sayilar),1,dosya);
		for(i=0;i<10;i++){
			printf("%d ",sayilar[i]);
		}
		fclose(dosya);
}

main(){
	
	//DosyaYaz();
	//DosyaOku();
	//rename("C:\\Ornekler\\ornek.txt","C:\\Ornekler\\ornekYeni.txt");
	//remove("C:\\Ornekler\\ornekYeni.txt");
	//binaryDosyaYaz();
	binaryDosyaOku();
}
