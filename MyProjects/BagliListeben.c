#include <stdio.h>
struct Node{
	int data;
	struct Node *sonraki;
};

struct Node* ilk=NULL;

void SonaEkle(int a){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=a;
	yeni->sonraki=NULL;
	
	if(ilk==NULL){
		ilk=yeni;
	}
	else{
		struct Node* gecici=ilk;
		while(gecici->sonraki!=NULL){			
			gecici=gecici->sonraki;
		}	
		gecici->sonraki=yeni;
	}
}


void listele(){
	int i;
	for(i=0;gecici!=NULL;i++){
		printf("%d ",gecici->data);
		gecici=gecici->sonraki;
	}
}
void  arayaekle(){
int a,i=0,b;
	printf("Kacinciden sonra eklensin");
	scanf("%d",a);
	printf("Kac eklensin");
	scanf("%d",b);
	while(i<a-1){
		gecici=gecici->sonraki;
	}
	sonaekle(b);
}

main(){
	
	switch(islem){
		case 1:sonaekle()
		break;
		case 2:basaekle()
		break;
		case 3:arayaekle()
		break;
		case 4:sil()
		break;
		case 5:listele()
		break;
		default:pririntf("Hatalý girdin lo"); return 1;
	}
}

