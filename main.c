#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i, *ptr, sum=0; // degiskenler, pointer ve sum=0 atand�
   printf("Eleman sayisini giriniz:\n");
   scanf("%d", &n);  //Girilen sayi n'e atanacak

   ptr = (int*)malloc(n*sizeof(int)); //malloc ile n sayisi kadar int alan� a��ld�

   if( ptr==NULL)
    printf("Yeterli hafiza yok");
   else
    {
        printf("Dizi Elemanlarini girniz: \n");
        for(i=0; i<n; i++)
        {
            scanf("%d", ptr+i); // ptr �u an listenin ba��nda d�ng� artt�k�a o da s�rayla artacak.
            sum += *(ptr+i);// yazilan t�m sayilan sum degiskeninde toplaniyor.
        }



    }

    printf("Girilen sayilar toplami= %d", sum); // sum bas�l�r.
    return;
}
