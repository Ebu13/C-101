#include <stdio.h>
#include <conio.h>

int main(){
	int ilk=1,iki=1,i,t;
	
	for(i=0;i<39;i++){
		if(i==0){
			printf("Fibonacci %d,%d,",ilk,iki);
		}
		t=ilk+iki;
			if(i%10==0){
			printf("\n");
		}
		ilk=iki;
		iki=t;
		printf("%d,",iki);
	
	}
	return 0;
}
