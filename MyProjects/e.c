#include <stdio.h>

int main()
{

    const int maxInput = 5;
    int i;
    double number, average, sum=0.0;
    
    for(i=1; i<=maxInput; ++i)
    {
        printf("%d. bir pozitif sayi giriniz: ", i);
        scanf("%lf",&number);

// Kullanıcı negatif sayı girerse, programın akışı jump etiketine atlar
        if(number < 0.0)
            goto jump;

        sum += number; // sum = sum+number;
    }

    jump:

    average=sum/(i-1);
    printf("Toplam = %.2f\n", sum);
    printf("Ortalama = %.2f", average);

    return 0;
}

