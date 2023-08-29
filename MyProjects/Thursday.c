#include <stdio.h>
#include <conio.h>

int a;

struct Node{
	int data;
	struct Node *sonraki;
};

struct Node* ilk=NULL;


void sonaekle(int veri){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
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
	printf("\n");
	if(ilk==NULL){
		printf("Liste BOS!");
	}
	else{
		struct Node* gecici=ilk;
		while(gecici!=NULL){
			printf("%d ",gecici->data);
			gecici=gecici->sonraki;
		}
	}
	printf("\n");
}

void tumunusil(){
		
	
	if(ilk==NULL){
		printf("Liste BOS!");
	}
	else{
		struct Node* gecici=ilk;
		
		if(ilk->data!=NULL){ 
			ilk=ilk->sonraki;
			free(gecici);
		}
		else{
			struct Node *silinecek;
			while(gecici->sonraki!=NULL){
				
					silinecek=gecici->sonraki; 
					gecici->sonraki=silinecek->sonraki;
					
					free(silinecek);
					break;			
				gecici=gecici->sonraki;				
			}			
		}
	}	
	
}


void sil(int veri){
	
	if(ilk==NULL){
		printf("Liste BOS!");
	}
	else{
		struct Node* gecici=ilk;
		
		if(ilk->data==veri){ 
			ilk=ilk->sonraki;
			free(gecici);
		}
		else{
			
			struct Node *silinecek;
			while(gecici->sonraki!=NULL){
				if(gecici->sonraki->data==veri){ 
					silinecek=gecici->sonraki; 
					gecici->sonraki=silinecek->sonraki;
					
					free(silinecek);
					break;
				}				
				gecici=gecici->sonraki;				
			}			
		}
	}	
}



void ara(int aranan){
	
	if(ilk==NULL){
		printf("Liste BOS!");
	}
	else{
		struct Node* gecici=ilk;		
		while(gecici!=NULL){
			if(gecici->data==aranan){
			printf("Sayi bulundu");
			return 0;
			}			
			gecici=gecici->sonraki;
		}
	}
	printf("Sayi bulunamadi:");

}

int elemansayisi(){
	int i=0;
	if(ilk==NULL){
		return 0;
	}
	else{
		struct Node* gecici=ilk;		
		while(gecici->data!=NULL){
			i++;		
			gecici=gecici->sonraki;
		}
		
		return i;
		
	}
}


main(){
	sonaekle(9);
	sonaekle(10);
	sonaekle(100);
	
int secim;
		printf("----------------\n");
		printf("GOREV\n");
		printf("----------------\n");
		printf("Islem seciniz:\n");
		printf("1.Eleman Silme\n");
		printf("2.Arama\n");
		printf("3.Eleman Sayisi Bulma\n");
		printf("4.Tum listeyi Silme\n");
		scanf("%d",&secim);
		int sayi;
		switch(secim){
			case 1: 
			
			printf("Hangi Eleman Silinsin:");
			scanf("%d",&sayi);
					sil(sayi);
					listele();
			break;
			
			case 2: 
			scanf("%d",&sayi);
					ara(sayi);
			break;
			
			case 3: 
					a=elemansayisi();
					printf("Eleman sayisi:%d",a);
			break;
			
			case 4:
					tumunusil();
			break;
			
			default:
				printf("Hatali Secim!");
				break;
			
		}
		
}




