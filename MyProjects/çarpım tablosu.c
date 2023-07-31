#include <stdio.h>
#include <conio.h>
int main(){
	int x,y;
	printf("\t \t\t             Carpim Tablosu\n");
	for(x=1;x<11;x++){
	printf("\n\t");
		for(y=1;y<6;y++){
			printf("%d*%d=%d\t\t",y,x,x*y);
		}
	}
	printf("\n");
	for(x=1;x<11;x++){
	printf("\n\t");
		for(y=6;y<11;y++){
			printf("%d*%d=%d\t\t",y,x,x*y);
		}
	}
	
}
	
