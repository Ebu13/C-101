#include <stdio.h>
main(){
	int i,sonuc,dizi[]={1,2,3,4,5,6,7,8,9,10};
	for(i=0;i<10;i++){
		sonuc=sonuc*dizi[i];
		printf("%d!=%d\n",i+1,sonuc);
	}
}
