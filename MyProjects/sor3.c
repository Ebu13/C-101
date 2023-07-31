#include <stdio.h>
#include <conio.h>


main(){
	int N,i,min,max;
	printf("Dizinin eleman sayisi kac olsun : ");
	scanf("%d",&N);
	int *p=(int *)malloc(sizeof(int)*N);
	for(i=0;i<N;i++){
		printf("%d.sayi:",i+1);				
		scanf("%d",p+i);
	}
	min=*p;
	max=*p;
	for(i=0;i<N;i++){
		if((*(p+i))<min)
			min=(*(p+i));
		if((*(p+i))>max)
			max=(*(p+i));	
	}
int	*enkucuk=&min,*enbuyuk=&max;
	printf("En buyuk ve en kucuk sayinin ortalamsi:%.2f",((max)+(min))/2.0);
}

