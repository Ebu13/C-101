main(){
	
	//1-7 aras� Girilen say�ya g�re haftan�n g�nlerini yazd�r
	int gunSayi;
	printf("1-7 arasi sayi giriniz:");
	scanf("%d",&gunSayi);
	
	switch(gunSayi){
		case 1: printf("Pazartesi");
		break;
		case 2:printf("Sali");
		break;
		case 3:printf("Carsamba");
		break;
		case 4: printf("Persembe");
		break;
		case 5:printf("Cuma");
		break;
		case 6:printf("Cumartesi");
		break;
		case 7:printf("Pazar");
		break;
		default:printf("Hatali sayi girdiniz.Lutfen 1-7 aras� giriniz");
	}
	
}
