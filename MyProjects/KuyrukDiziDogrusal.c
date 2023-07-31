#include <stdio.h>

#define MAX 5

int Kuyruk[MAX];
int ilk = -1, son =-1;
int DoluMu()
{
    if(son == MAX-1) return 1; 
    return 0;
}
int BosMu()
{
    if(ilk == -1) return 1;
    return 0;
}
void Ekle(int eleman)//EnQueue
{
    if(DoluMu()) printf("Kuyruk Dolu!! \n");
    else
    {
        if(ilk == -1) //Kuyruk boþken ilk eleman eklendiðinde ilk=0 olmalý
			ilk = 0;
        son++;
        Kuyruk[son] = eleman;
        printf("%d eklendi\n", eleman);
    }
}
int Cikar()//DeQueue
{
    int eleman;
    if(BosMu()) {
        printf("Kuyruk Bos !! \n");
        return(-1);
    } else {
        eleman = Kuyruk[ilk];//Çýkarýlacak sayýyý return etmek için eleman deðiþkeninde tutuyoruz
        
		if (ilk == son){     //tek eleman vardýr,-1 yaparak kuyruðu boþalt
            ilk = -1;
            son = -1;
        } 
        else {
            ilk++; //Kaydýrma yapýlmayacaksa Çýkarýrken kuyruðun baþýný arttýr (dizinin sonraki elemanýný göster)           
            
			//kaydýrma yapýlacaksa:
//            int i;
//            for(i=0;i<=son;i++){
//            	Kuyruk[i]=Kuyruk[i+1];
//			}
//			ilk=0;
//			son=son-1;

        }
        
        printf("%d cikarildi.\n",eleman);//Burda veya main metodunda yazdýrýlabilir
        return eleman;
    }
}
void Listele()
{
    int i;
    if(BosMu()) printf("Kuyruk Bos!\n");
    else
    {        
        printf("Kuyruk: ");
        for( i = ilk; i<=son; i++) {            
			printf("%d ",Kuyruk[i]);
        }
        printf("\n");
    }
}

int main()
{
    Ekle(1);
    Ekle(2);
    Ekle(3);
    Listele();
    int cikan= Cikar();    
    Cikar();
    Listele();
    Ekle(4);
    Listele();

    return 0;
}
