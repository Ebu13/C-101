main(){
	
	//Not ortalamas� hesaplayan program:
	float vize,final,ort;	
	
	printf("Vize notu:");
	scanf("%f",&vize);
	printf("Final notu:");
	scanf("%f",&final);
	
	ort=vize*0.4 + final*60/100;//ortalamay� hesapl�yor
	
	printf("Not ortalamasi:%f \n",ort);
		
	if(ort>=55 && final>=50){
		printf("\nTebrikler!");
		printf("S�navi gectiniz");
	}
	else {
		printf("S�navi gecemediniz!");
	}
		
	//Not ortalamas�na g�re Harf Notu hesapla:	
	//0-39: FF
	//40-44: FD
	//45-54: DD
	//55-69: CC
	//70-84: BB
	//85-100:AA
	
	//1.y�ntem:
	if(ort>=0&&ort<=39){
		printf("\n Harf Notu:FF");
	}
	else if(ort>=40 && ort<=44){
		printf("\n Harf Notu:FD");
	}
	else if(ort>=45 && ort<=54){
		printf("\n Harf Notu:DD");
	}
	else if(ort>=55 && ort<=69){
		printf("\n Harf Notu:CC");
	}
	else if(ort>=70 && ort<=84){
		printf("\n Harf Notu:BB");
	}
	else if(ort>=85 && ort<=100){
		printf("\n Harf Notu:AA");
	}
	
	
	//2.y�ntem:
	if(ort>=85){
		printf("\nHarf Notu:AA");
	}
	else if(ort>=70){
		printf("\nHarf Notu:BB");
	}
	else if(ort>=55){
		printf("\nHarf Notu:CC");
	}
	else if(ort>=45){
		printf("\nHarf Notu:DD");
	}
	else if(ort>=40){
		printf("\nHarf Notu:FD");
	}
	else {
		printf("\n Harf Notu:FF");
	}
	
}
