 #include <stdio.h>
 main(){
 	
 	//Girilen sayýnýn pozitif-negatif olduðunu bulmak
 	
 	int a;
 	printf("Bir sayi giriniz:");
 	scanf("%d",&a);
 	
 	 	
 	if(a>0){
 		printf("Pozitif");
	 }	 
 	else if(a<0){
 		printf("Negatif");
	 }
	else {
		printf("Sifir");
	}
	 
 }
