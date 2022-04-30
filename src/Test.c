#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Kisi.h"
#include "Dosya.h"
#include "Oyun.h"



int main()
{
 Dosya adad = new_Dosya();
 int kisiSayisi=0;
 int sansliSayi=0;
// Kisi* kisiler = adad->kisiOku(adad, &kisiSayisi);
 int* sansliSayilar = adad->getSayi(adad,&sansliSayi);
 //hepsi aynı node'u point ediyor
//  printf("\nkisiSayisi: %i", kisiSayisi);
//  for (size_t i = 0; i < kisiSayisi; i++)
//  {
//     printf("%i\t%s\t%lf\t%lf\t%i\n",i,kisiler[i]->adSoyad,kisiler[i]->para,kisiler[i]->oran,kisiler[i]->sayi);
//  }
 for (int i = 0; i < sansliSayi; i++)
 {
    printf("%d\n",sansliSayilar[i]);//dizi doğru ama çöp dönüyo ammmına
 }
 }
