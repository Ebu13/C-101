#include <stdio.h>
int main(){
	int i=0,z=0,a=0,b,w,c,d=0;				 
	printf("Kac tane sayi giriceksiniz:");
	scanf_s("%d",&w);                      
	int Dizi[w];
	while(i<w){
		if(d==0){
		printf("%d.Sayi:",i+1);
		scanf("%d",&Dizi[i]);
		}
		else{
			printf("%d.Sayiyi tekrar gir:",i+1);
		    scanf("%d",&Dizi[i]);
		    d=0;
		}
		if(Dizi[i]<0){
			printf("Eksi sayi girmeyiniz.\n");
			d++;
			continue;
		}else{              //Buradaki while d�ng�s�nde dizinin elemanlar�n� belirledim.
		i++;
	}
	}
	for(i=0;i<w;i++){
		if(Dizi[i]%2==0){
			z++;
		}                               /*Buradaki for d�ng�s�nde ise ka� tane tek ve �ift say� var ��rendim.
		                                  ��nk� bana tek[a] n�n i�indeki a say�s� belli de�il hatas� veriyordu.*/
		else{
			a++;
		}

	}
	b=z;
	c=a;
	int tek[a],cift[z];
	a=0;
	z=0;
	for(i=0;i<w;i++){
		if(Dizi[i]%2==0){
			for(;z<b;z++){
				cift[z]=Dizi[i];            //Buradaki for un amac� �ift say�lar� atamak.
				z++;
				break;
			}
		}
			else{
				while(a<c){
					tek[a]=Dizi[i];            //Buradaki while �n amac� tekleri atamak.
					a++;
					break;
				}
			}
	}
	if(c==0){
		printf("\n\nTek Sayilar:{}");
	}
	else{
	printf("\n\nTek  Sayilar:{");                      //Buradan a�a��s� yazd�rma zaten.
	for(a=0;a<c;a++){
		printf("%d",tek[a]);  
		if(a<c-1){
			printf(",");
		}       
		if(a==c-1){
			printf("}");
			break;
		}
	}
}
	if(b==0){
		printf("\n\nCift Sayilar:{}");
	}
	else{
	printf("\n\nCift Sayilar:{");
	for(z=0;z<b;z++){
		printf("%d",cift[z]);
		if(z<b-1){
			printf(",");
		}   		
	}
	printf("}");
}
	return 0;
}
