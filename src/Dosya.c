#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Dosya.h"
#include "Kisi.h"

// int* getSayi(const Dosya this, int *sansliSayi)
// {
//    FILE *dosya;
//    dosya = fopen("doc/Sayilar.txt", "r");
//    if (dosya == NULL)
//    {
//       printf("Dosya bulunamadi\n");
//       exit(-1);
//    }
//    int satirSayi = 0;
//    char satir1[60];
//    //malloc()
//    //fscanf()
//    while (fgets(satir1, 60, dosya))
//    {
//       satirSayi++;
//    }
//    fclose(dosya);
//    int dizi[satirSayi];   
//    int index = 0;
//    dosya = fopen("doc/Sayilar.txt", "r");
//    while (fgets(satir1, 60, dosya))
//    {
//       dizi[index] = atoi(satir1);
//       //printf("%i\n",dizi[index]);
//       index++;
//    }
//    int *ip = &dizi;
//    for (int i = 0; i < satirSayi; i++)
//    {
//       //printf("%i\t%i\n", i, ip[i]);
//    }
//    *sansliSayi = satirSayi;
//    return ip;
//    fclose(dosya);
   
  
// }

int* getSayi(const Dosya this, int *sansliSayi)
{
   FILE *dosya;
   dosya = fopen("doc/Sayilar.txt", "r");
   if (dosya == NULL)
   {
      printf("Dosya bulunamadi\n");
      exit(-1);
   }
   int satirSayi = 0;
   char satir1[5];
   //malloc()
   //fscanf()
   while (fgets(satir1, 5, dosya))
   {
      satirSayi++;
   }
   fclose(dosya);
   char* sanslidizi= malloc(sizeof(int)*satirSayi);   
   int index = 0;
   if (dosya = fopen("doc/Sayilar.txt", "r"))
   {
      fscanf(dosya,"%d",sanslidizi[index]);
      index++;
   }
   //int *ip = &sanslidizi;
   *sansliSayi = satirSayi;
    return sanslidizi;

   fclose(dosya);
   
  
}


Kisi *kisiOku(const Dosya this, int *kisiSayisi)
{
   // FILE *dosya;
   // dosya = fopen("doc/Kisiler.txt", "r");
   // if (dosya == NULL)
   // {
   //    printf("Dosya bulunamadi\n");
   //    exit(-1);
   // }
   // int satirSayi1 = 0;
   // char satir1[60];
   // while (fgets(satir1, 60, dosya))
   // {
   //    satirSayi1++;
   // }
   // fclose(dosya);

   // dosya = fopen("doc/Kisiler.txt", "r");
   // const int size = satirSayi1;
   // Kisi gelenarray[size];
   // // = malloc(sizeof(Kisi) * satirSayi); // ********************************** dizi haline getirilerek pointer olmaktan kurtarılacak
   // size_t bufsize = 60;
   // char *satir2 = malloc(sizeof(char) * bufsize);
   // // ssize_t satirBoyut;
   // // satirBoyut = getline(&satir2, &bufsize, dosya);
   // // printf("%d %s",satirBoyut,satir2);
   // int index = 0;
   // while (fgets(satir2, bufsize, dosya))
   // {
   //    char *adSoyad;
   //    double para;
   //    double oran;
   //    int sayi;
   //    int sayac = 0;
   //    char *ayrac = "#";
   //    char *cop;
   //    adSoyad = strtok(satir2, ayrac);
   //    //strcpy(adSoyad,strtok(satir2, ayrac));
   //    while (sayac < 3)
   //    {
   //       switch (sayac)
   //       {
   //       case 0:
   //          para = strtod(strtok(NULL, ayrac), &cop);
   //          break;
   //       case 1:
   //          oran = strtod(strtok(NULL, ayrac), &cop);
   //          break;
   //       case 2:
   //          sayi = atoi(strtok(NULL, ayrac));
   //          break;

   //       default:
   //          break;
   //       }
   //       sayac++;
   //    }
   //    sayac = 0;
   //    Kisi k = new_Kisi(adSoyad, para, oran, sayi);
   //    gelenarray[index] = new_Kisi(adSoyad, para, oran, sayi); // k;
   //                                                             // printf("k: %p/tindex:%i\n",k, (gelenarray[index])->sayi);
   //    index++;
   // }

   // fclose(dosya);

   // *kisiSayisi = satirSayi1;
   // Kisi kp = &gelenarray;
   // return kp;
}




void delete_Dosya(const Dosya this)
{
   if (this == NULL)
      return;
   free(this);
}
Dosya new_Dosya()
{
   Dosya this;
   this = (Dosya)malloc(sizeof(struct DOSYA));
   this->sayi = 0;
   this->kisi = 0;
   this->kisiOku = &kisiOku;
   this->getSayi = &getSayi;
}