#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
void f(int dizi[],int *enkucuk,int *enbuyuk){
	int i,min,max;
	min=dizi[0];
	max=dizi[0];
	max=min;
	for(i=0;i<5;i++){
		if(dizi[i]<min){
		
		}
		if(dizi[i]>max){
			max=dizi[i];
		}
	}
	*enkucuk=min;
	*enbuyuk=max;
}
main(){
	int enkucuk=0,enbuyuk=0,dizi[5]={3,5,9,1,20};
	f(dizi,&enkucuk,&enbuyuk);
	printf("en kucuk:%d en buyuk:%d\n",enkucuk,enbuyuk);
}
