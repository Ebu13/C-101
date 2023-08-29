#include <stdio.h>
main(){
	int i,a=1,b=1,c,n;
	printf("KAC SAYI OLSUN:");
	scanf_s("%d",&n);
	for(i=0;i<n;i++){
	    a=b;
	    b=c;
	    c=a+b;
	    printf("%d ",c);
	}
}
