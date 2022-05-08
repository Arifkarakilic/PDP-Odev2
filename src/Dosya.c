/** *
* @author Suleyman Arif Karakilic
* @since 15 Mart 2022
* 1.Ögretim / C
* */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Dosya.h"
#include "Kisi.h"


int* getSayi(const Dosya this,int* sansliSayi)
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
   while (fgets(satir1, 5, dosya))
   {
      satirSayi++;
      
   }
   fclose(dosya);
   int* sanslidizi= malloc(sizeof(int)*satirSayi);   
   int index = 0;
   if ((dosya = fopen("doc/Sayilar.txt", "r"))!= NULL)
   {
      while (!feof(dosya))
      {
         fscanf(dosya,"%i",&sanslidizi[index]);
         index++;
      }
      
      
      
   }
   *sansliSayi = satirSayi;


   fclose(dosya);
   free(sanslidizi);
   return sanslidizi;
  
}


Kisi *kisiOku(const Dosya this, int *kisiSayisi)
{
   FILE *dosya;
   dosya = fopen("doc/Kisiler.txt", "r");
   if (dosya == NULL)
   {
      printf("Dosya bulunamadi\n");
      exit(-1);
   }
   int satirSayi1 = 0;
   char satir1[60];
   while (fgets(satir1, 60, dosya))
   {
      satirSayi1++;
   }
   fclose(dosya);

   dosya = fopen("doc/Kisiler.txt", "r");
   const int size = satirSayi1;
   Kisi* gelenarray=malloc(sizeof(Kisi)*size);
   size_t bufsize = 60;
   char *satir2 = malloc(sizeof(char) * bufsize);
   int index = 0;
   while (fgets(satir2, bufsize, dosya))
   {
   
      char *adSoyad = malloc(sizeof(char)*60);
      double para;
      double oran;
      int sayi;
      int sayac = 0;
      char *ayrac = "#";
      char *cop;
      strcpy(adSoyad,strtok(satir2, ayrac));
      while (sayac < 3)
      {
         switch (sayac)
         {
         case 0:
            para = strtod(strtok(NULL, ayrac), &cop);
            break;
         case 1:
            oran = strtod(strtok(NULL, ayrac), &cop);
            break;
         case 2:
            sayi = atoi(strtok(NULL, ayrac));
            break;

         default:
            break;
         }
         sayac++;
      }
      sayac = 0;
      Kisi k = new_Kisi(adSoyad, para, oran, sayi);
      gelenarray[index] = new_Kisi(adSoyad, para, oran, sayi);
      index++;
   }

   fclose(dosya);

   *kisiSayisi = satirSayi1;
   return gelenarray;
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
   this->delete_Dosya = &delete_Dosya;

   return this;
}