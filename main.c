#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i, *ptr, sum=0; // degiskenler, pointer ve sum=0 atandý
   printf("Eleman sayisini giriniz:\n");
   scanf("%d", &n);  //Girilen sayi n'e atanacak

   ptr = (int*)malloc(n*sizeof(int)); //malloc ile n sayisi kadar int alaný açýldý

   if( ptr==NULL)
    printf("Yeterli hafiza yok");
   else
    {
        printf("Dizi Elemanlarini girniz: \n");
        for(i=0; i<n; i++)
        {
            scanf("%d", ptr+i); // ptr þu an listenin baþýnda döngü arttýkça o da sýrayla artacak.
            sum += *(ptr+i);// yazilan tüm sayilan sum degiskeninde toplaniyor.
        }



    }

    printf("Girilen sayilar toplami= %d", sum); // sum basýlýr.
    return;
}
