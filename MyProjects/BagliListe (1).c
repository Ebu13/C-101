#include <stdio.h>
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
		struct Node* gecici=ilk; //listenin ba��ndan ba�la
		while(gecici->sonraki!=NULL){ //son elemana kadar ilerle		
			gecici=gecici->sonraki;
		}	
		gecici->sonraki=yeni;//d�ng� bitti�inde gecici son d���m� g�sterdi�inden sonras�na yeni d���m� ekle
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
		yeni->sonraki=ilk; //ilk eleman� yeni eleman�n sonras�na ba�la
		ilk=yeni; //yeni d���m� ilk d���m olarak ata
	}
}

void ArayaEkle(int veri,int aranan){ //aranan: hangi elemandan sonra eklenece�ini belirtir. 5'ten sonra 7 eklenecekse veri:7,aranan:5 olur
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	
	if(ilk==NULL){//listede eleman yoksa
		ilk=yeni;
	}
	else{
		struct Node* gecici=ilk;
		while(gecici!=NULL){
			if(gecici->data==aranan){ //sonras�na eklenecek eleman bulundu ise
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
			ilk=ilk->sonraki;//ilk eleman silinecekse ilk de�erini sonrakini g�sterecek �ekilde g�ncelle
			free(gecici); //bellekten sil
		}
		else{
			//Silinecek eleman: geciciden sonraki eleman olacak. gecici ile silinecek eleman�n sonras� ba�lanmal�d�r.
			//silinecek d���mden �nceki d���m ile sonraki d���m ba�lant�s�n� sa�lanmal�
			int sayac=0;
			struct Node *silinecek;
			while(gecici->sonraki!=NULL){
				if(gecici->sonraki->data==veri){ 
					silinecek=gecici->sonraki; 
					gecici->sonraki=silinecek->sonraki;
					
					free(silinecek);
					sayac=1;
					break;
				}
				
				gecici=gecici->sonraki;				
			}
			if(sayac==0){
				printf("Bulunamadi");
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

struct Node* Ara(int aranan){//Arama fonksiyonu struct Node* tipinde olup d���m� d�nd�r�r
	
	if(ilk==NULL){
		printf("Liste BOS!");
	}
	else{
		struct Node* gecici=ilk;		
		while(gecici!=NULL){
			if(gecici->data==aranan){
				return gecici;//aranan say�n�n oldu�u d���m� d�nd�r
			}			
			gecici=gecici->sonraki;
		}
	}
	return NULL;//bulunamazsa NULL d�nd�r;
}

void SiraliEkle(int veri){//k���kten b�y��e say�lar� s�ral� olarak ekle
		struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
		yeni->data=veri;
		yeni->sonraki=NULL;
		
	if(ilk==NULL || ilk->data > veri){ //Listede eleman yoksa veya veri ilk elemandan k���kse ba�a ekle(ilk=yeni veri)
		//ilk=yeni;//ilk=2		
		BasaEkle(veri);
	}
//	else if(ilk->data>veri){//ilkten k���k ise ba�a ekle
//		yeni->sonraki=ilk;//2->3
//		ilk=yeni;//ilk=2
//	}
	else{
			
		struct Node *gecici=ilk;
		while(gecici->sonraki!=NULL && gecici->sonraki->data < veri){//ge�iciden sonraki veriden k���k oldu�u s�rece ilerle
			gecici=gecici->sonraki;
		}
		//ge�icinin sonras�na yeniyi ekle:
		yeni->sonraki=gecici->sonraki;
		gecici->sonraki=yeni;
	}
}

void TumListeyiSil(){
	struct Node* gecici;
	while(ilk!=NULL){
		//listenin ba��ndan sil ve ilk eleman� kayd�r
		gecici=ilk;
		ilk=ilk->sonraki;
		free(gecici);
	}	
}

int ElemanSayisiBul(){
	int sayac=0;
	struct Node* gecici=ilk;
	while(gecici!=NULL){
		gecici=gecici->sonraki;
		sayac++;
	}
	return sayac;
}

void ListeleRecursive(struct Node* gecici){
	//Recursive y�ntem ile listenin ilk eleman�ndan ba�lay�p sonuna kadar gider
	//NULL olunca geri �a�r�ld��� yere d�ner
	//Her �a��rmadan �NCE printf k�sm� �al��t��� i�in en BA�TAN yazd�rmaya ba�lar
	if(gecici==NULL)
		return;
	printf("%d ",gecici->data);	
	ListeleRecursive(gecici->sonraki);
	
}

void TerstenYazdirRecursive(struct Node* gecici){
	//Recursive y�ntem ile listenin ilk eleman�ndan ba�lay�p sonuna kadar gider
	//NULL olunca geri �a�r�ld��� yere d�ner
	//Her �a��rmadan SONRA printf k�sm� �al��t��� i�in en SONDAN yazd�rmaya ba�lar
	if(gecici==NULL)
		return;
	TerstenYazdirRecursive(gecici->sonraki);
	printf("%d ",gecici->data);	
}

void TerstenYazdir(){
	//2.y�ntem: �lk listeyi dola�arak her eleman� ikinci listenin ba��na ekle:
	struct Node* ikinciListeBas=NULL;
	
	struct Node* gecici=ilk;
	while(gecici!=NULL){		
		
		struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
		yeni->data=gecici->data;//ilk listedeki gecici eleman� ilkTersListe listesine eklemek i�in yeni de�i�kenine kopyala
		yeni->sonraki=NULL;
		
		//yeni d���m� ilkTersListeye ba�tan ekle:
		if(ikinciListeBas==NULL){
			ikinciListeBas=yeni;
		}
		else{
			yeni->sonraki=ikinciListeBas; 
			ikinciListeBas=yeni; 
		}		
		
		gecici=gecici->sonraki;
	}
	
	//�kinci listeyi yazd�r:
		struct Node* temp=ikinciListeBas;
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->sonraki;
		}	
}

//NOT:
//Tersten Yazd�r: 3.y�ntem olarak YI�IT kullan�labilir. 
//Listenin t�m elemanlar� s�rayla y���ta push edilir. 
//Sonra pop edilerek s�rayla �ekilirse, son eklenen ilk �ekilece�i i�in tersten yazd�r�lm�� olur.

main(){
	
	BasaEkle(5);
	SonaEkle(9);
	BasaEkle(3);
	SonaEkle(10);
	ArayaEkle(7,5);//7 say�s�n� 5 ten sonras�na ekle
	Listele();
	printf("Recursive Listele:\n");
	ListeleRecursive(ilk);
	printf("\nEleman sayisi:%d\n",ElemanSayisiBul());
	
	printf("Tersten Yazdir(Recursive ile):\n");
	TerstenYazdirRecursive(ilk);
	printf("\nTersten Yazdir(Kopyalayip basa ekleyerek):\n");
	TerstenYazdir();

	
}

