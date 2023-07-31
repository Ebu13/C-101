/*
Metin:"Yazilim_Bolumu_2021"
Büyük Harf: Y B
Küçük harfler: a z i l i m o l u m u
Rakamlar: 2 0 2 1
Semboller: _ _
*/
main(){
	
	char kelime[50];
	printf("bir metin giriniz:");
	gets(kelime);
	
	int i;
	//1.yöntem: ASCII kodu
//	for(i=0;kelime[i]!='\0';i++){
//		
//		if(kelime[i]>=48 && kelime[i]<=57){//0-9 arasý
//			printf("%c:Rakam \n",kelime[i]);			
//		}
//		else if(kelime[i]>=65 && kelime[i]<=90){
//			printf("%c:BUYUK HARF \n",kelime[i]);
//		}
//		else if(kelime[i]>=97&& kelime[i]<=122){
//			printf("%c:kucuk harf \n",kelime[i]);
//		}
//		else{
//			printf("%c:sembol \n",kelime[i]);
//		}		
//	}
	//2.yöntem:karakter kontrolü
	for(i=0;kelime[i]!='\0';i++){
	
		if(kelime[i]>='0' && kelime[i]<='9'){//0-9 arasý
			printf("%c:Rakam \n",kelime[i]);			
		}
		else if(kelime[i]>='A' && kelime[i]<='Z'){//A-Z arasý
			printf("%c:BUYUK HARF \n",kelime[i]);
		}
		else if(kelime[i]>='a'&& kelime[i]<='z'){//a-z arasý
			printf("%c:kucuk harf \n",kelime[i]);
		}
		else{
			printf("%c:sembol \n",kelime[i]);
		}		
	}
	
	
}



