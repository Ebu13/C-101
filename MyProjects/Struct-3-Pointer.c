struct Kitap{
	char isim[50];
	char yazar[30];
	int sayfa;
};

void yaz(struct Kitap k){
	printf("kitap adi=%s yazar=%s sayfa=%d",k.isim,k.yazar,k.sayfa);
}

void yazPointer(struct Kitap *k){
	printf("kitap adi=%s yazar=%s sayfa=%d",k->isim,k->yazar,k->sayfa);
}

main(){

//	struct Kitap kitap;
//	printf("kitap ismi:");
//	gets(kitap.isim);
//	printf("yazar:");
//	gets(kitap.yazar);
//	printf("sayfa:");
//	scanf("%d",&kitap.sayfa);	
//	yaz(kitap);
	
	struct Kitap *p=(struct Kitap*)malloc(sizeof(struct Kitap));
	printf("kitap ismi:");
	gets(p->isim);
	printf("yazar:");
	gets(p->yazar);
	printf("sayfa:");
	scanf("%d",&p->sayfa);	
	yazPointer(p);	
	
}
