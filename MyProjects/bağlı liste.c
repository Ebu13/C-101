
#include <stdio.h>
struct Node{
	int data;
	struct Node *sonraki;
};

struct Node* ilk=NULL;

void basaekle(int a){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=a;
	yeni->sonraki=NULL;
	
	if(ilk==NULL){ //listede eleman yoksa
		ilk=yeni;
	}
	else{
		yeni->sonraki=ilk;
		ilk=yeni; 
	}
}

void arayaekle(int a,int b){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=a;
	yeni->sonraki=NULL;
	
	if(ilk=NULL){
		ilk=yeni;
	}
	else{
		struct Node* gecici=ilk;
		while(gecici->sonraki!=NULL){
			if(gecici->data=b){
				yeni->sonraki=gecici->sonraki;
				gecici->sonraki=yeni;
				break;
			}
			gecici=gecici->sonraki;
		}
	}
}

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
	struct Node *gecici=ilk;
	while(gecici!=NULL){
		printf("%d ",gecici->data);
		gecici=gecici->data;
	}
}


int delete(int data){ // düðüm silme

    struct node *onceki = NULL;
    struct node *index = ilk;

    
    if(ilk==NULL){  // liste boþ mu kontrol
        printf("baglý liste bos \n");
        return 1;
    }

    
    if(ilk->data==data){  //baþtaki ni silme
        struct node *t = ilk;
        ilk = ilk->sonraki;
        free(t);
        return 1;
    }

    
}

main(){
	
	
	
	
	int islem;
	int n;
	do{
	
	printf("1.EKLE\n");
	printf("2.CIKAR\n");
	printf("3.LISTELE\n");
	printf("4.CIKIS\n");
	printf("bir islem seciniz:");
	scanf("%d",&islem);
	switch(islem){
		case 1:
			break;
			
		case 2:
		break;
		case 3:
			
		break;
		case 4:
			
		break;
		
		case 5:	
			
			
		break;
		default:printf("YANLIS ISLEM SECTINIZ\n");
		
		break;
	}
 }while(islem!=5);
	}
	
	
	
	
	
	
	
	


