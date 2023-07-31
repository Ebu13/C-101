#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *sonraki;
};

struct Node* ilk=NULL;

void SonaEkle(int veri){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	
	if(ilk==NULL){
		ilk=yeni;
	}
	else{
		struct Node* gecici=ilk; //listenin baþýndan baþla
		while(gecici->sonraki!=NULL){ //son elemana kadar ilerle		
			gecici=gecici->sonraki;
		}	
		gecici->sonraki=yeni;//döngü bittiðinde gecici son düðümü gösterdiðinden sonrasýna yeni düðümü ekle
	}
}

void BasaEkle(int veri){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	
	if(ilk==NULL){//listede eleman yoksa
		ilk=yeni;
	}
	else{
		yeni->sonraki=ilk; //ilk elemaný yeni elemanýn sonrasýna baðla
		ilk=yeni; //yeni düðümü ilk düðüm olarak ata
	}
}

void ArayaEkle(int veri,int aranan){ //aranan: hangi elemandan sonra ekleneceðini belirtir. 5'ten sonra 7 eklenecekse veri:7,aranan:5 olur
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	
	if(ilk==NULL){//listede eleman yoksa
		ilk=yeni;
	}
	else{
		struct Node* gecici=ilk;
		while(gecici!=NULL){
			if(gecici->data==aranan){ //sonrasýna eklenecek eleman bulundu ise
				yeni->sonraki=gecici->sonraki;
				gecici->sonraki=yeni;
				break;
			}
			gecici=gecici->sonraki;
		}		
	}	
}

void Sil(int veri){
	
	if(ilk==NULL){
		printf("Liste BOS!");
	}
	else{
		struct Node* gecici=ilk;
		
		if(ilk->data==veri){ 
			ilk=ilk->sonraki;//ilk eleman silinecekse ilk deðerini sonrakini gösterecek þekilde güncelle
			free(gecici); //bellekten sil
		}
		else{
			//Silinecek eleman: geciciden sonraki eleman olacak. gecici ile silinecek elemanýn sonrasý baðlanmalýdýr.
			//silinecek düðümden önceki düðüm ile sonraki düðüm baðlantýsýný saðlanmalý
			
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

void Listele(){
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

struct Node* Ara(int aranan){//Arama fonksiyonu struct Node* tipinde olup düðümü dönderir
	
	if(ilk==NULL){
		printf("Liste BOS!");
	}
	else{
		struct Node* gecici=ilk;		
		while(gecici!=NULL){
			if(gecici->data==aranan){
				return gecici;//aranan sayýnýn olduðu düðümü dönder
			}			
			gecici=gecici->sonraki;
		}
	}
	return NULL;//bulunamazsa NULL dönder;
}

main(){
	
	BasaEkle(5);
	SonaEkle(9);
	
	Listele();
	BasaEkle(3);
	SonaEkle(10);
	ArayaEkle(7,5);//7 sayýsýný 5 ten sonrasýna ekle
	Listele();
	
	Sil(5);//aradakini sil
	Sil(10);//sondan sil
	Sil(3);//baþtan sil
	Listele();
	
	int sayi=9;
	struct Node* arananDugum=Ara(sayi);
	if(arananDugum!=NULL){
		printf("%d bulundu.",arananDugum->data);//bulunan düðümün tüm bilgileri yazýlabilir
	}
	else{
		printf("%d bulunamadi!",sayi);
	}
	
}

