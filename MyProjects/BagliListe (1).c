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

struct Node* Ara(int aranan){//Arama fonksiyonu struct Node* tipinde olup düðümü döndürür
	
	if(ilk==NULL){
		printf("Liste BOS!");
	}
	else{
		struct Node* gecici=ilk;		
		while(gecici!=NULL){
			if(gecici->data==aranan){
				return gecici;//aranan sayýnýn olduðu düðümü döndür
			}			
			gecici=gecici->sonraki;
		}
	}
	return NULL;//bulunamazsa NULL döndür;
}

void SiraliEkle(int veri){//küçükten büyüðe sayýlarý sýralý olarak ekle
		struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
		yeni->data=veri;
		yeni->sonraki=NULL;
		
	if(ilk==NULL || ilk->data > veri){ //Listede eleman yoksa veya veri ilk elemandan küçükse baþa ekle(ilk=yeni veri)
		//ilk=yeni;//ilk=2		
		BasaEkle(veri);
	}
//	else if(ilk->data>veri){//ilkten küçük ise baþa ekle
//		yeni->sonraki=ilk;//2->3
//		ilk=yeni;//ilk=2
//	}
	else{
			
		struct Node *gecici=ilk;
		while(gecici->sonraki!=NULL && gecici->sonraki->data < veri){//geçiciden sonraki veriden küçük olduðu sürece ilerle
			gecici=gecici->sonraki;
		}
		//geçicinin sonrasýna yeniyi ekle:
		yeni->sonraki=gecici->sonraki;
		gecici->sonraki=yeni;
	}
}

void TumListeyiSil(){
	struct Node* gecici;
	while(ilk!=NULL){
		//listenin baþýndan sil ve ilk elemaný kaydýr
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
	//Recursive yöntem ile listenin ilk elemanýndan baþlayýp sonuna kadar gider
	//NULL olunca geri çaðrýldýðý yere döner
	//Her çaðýrmadan ÖNCE printf kýsmý çalýþtýðý için en BAÞTAN yazdýrmaya baþlar
	if(gecici==NULL)
		return;
	printf("%d ",gecici->data);	
	ListeleRecursive(gecici->sonraki);
	
}

void TerstenYazdirRecursive(struct Node* gecici){
	//Recursive yöntem ile listenin ilk elemanýndan baþlayýp sonuna kadar gider
	//NULL olunca geri çaðrýldýðý yere döner
	//Her çaðýrmadan SONRA printf kýsmý çalýþtýðý için en SONDAN yazdýrmaya baþlar
	if(gecici==NULL)
		return;
	TerstenYazdirRecursive(gecici->sonraki);
	printf("%d ",gecici->data);	
}

void TerstenYazdir(){
	//2.yöntem: Ýlk listeyi dolaþarak her elemaný ikinci listenin baþýna ekle:
	struct Node* ikinciListeBas=NULL;
	
	struct Node* gecici=ilk;
	while(gecici!=NULL){		
		
		struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
		yeni->data=gecici->data;//ilk listedeki gecici elemaný ilkTersListe listesine eklemek için yeni deðiþkenine kopyala
		yeni->sonraki=NULL;
		
		//yeni düðümü ilkTersListeye baþtan ekle:
		if(ikinciListeBas==NULL){
			ikinciListeBas=yeni;
		}
		else{
			yeni->sonraki=ikinciListeBas; 
			ikinciListeBas=yeni; 
		}		
		
		gecici=gecici->sonraki;
	}
	
	//Ýkinci listeyi yazdýr:
		struct Node* temp=ikinciListeBas;
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->sonraki;
		}	
}

//NOT:
//Tersten Yazdýr: 3.yöntem olarak YIÐIT kullanýlabilir. 
//Listenin tüm elemanlarý sýrayla yýðýta push edilir. 
//Sonra pop edilerek sýrayla çekilirse, son eklenen ilk çekileceði için tersten yazdýrýlmýþ olur.

main(){
	
	BasaEkle(5);
	SonaEkle(9);
	BasaEkle(3);
	SonaEkle(10);
	ArayaEkle(7,5);//7 sayýsýný 5 ten sonrasýna ekle
	Listele();
	printf("Recursive Listele:\n");
	ListeleRecursive(ilk);
	printf("\nEleman sayisi:%d\n",ElemanSayisiBul());
	
	printf("Tersten Yazdir(Recursive ile):\n");
	TerstenYazdirRecursive(ilk);
	printf("\nTersten Yazdir(Kopyalayip basa ekleyerek):\n");
	TerstenYazdir();

	
}

