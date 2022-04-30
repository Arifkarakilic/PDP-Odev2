#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Dosya.h"
#include "Kisi.h"
#include "Oyun.h"

void *oyun(const Oyun this)
{


    Dosya adad = new_Dosya();
    double masabakiye = 0;
    
    int tur = 0;
    int kisiSayisi = 0;
    int sansliSayi = 0;
    Kisi *kisiler = adad->kisiOku(adad, &kisiSayisi);
    int *sansliSayilar = adad->getSayi(adad, &sansliSayi);
    double parasi = kisiler[0]->para;
    char* enZengin =kisiler[0]->adSoyad;
    for (int i = 0; i < sansliSayi; i++)
    {
        // printf("Sansli Sayi: %d\n", sansliSayilar[i]);
        for (int j = 0; j < kisiSayisi; j++)
        {

            if (kisiler[j]->para > 1000)
            {
                double degisken = kisiler[j]->para * kisiler[j]->oran *9;
                double degisken2 = kisiler[j]->para * kisiler[j]->oran;
                if (kisiler[j]->sayi == sansliSayilar[i])
                {
                    
                    kisiler[j]->para += degisken;
                    masabakiye = masabakiye -degisken;
                }
                else
                {
                   
                    kisiler[j]->para = kisiler[j]->para - degisken2;
                    masabakiye = masabakiye+ degisken2;
                }
                if (kisiler[j]->para>parasi)
                {
                    enZengin = kisiler[j]->adSoyad;
                    parasi = kisiler[j]->para;
                }
                
            }
        }
        tur++;
    }
    printf("Masa Bakiye : %lf\t", masabakiye);
    printf("En zengin %s,%lf", enZengin, parasi);
}

Oyun new_Oyun()
{
    Oyun this;
    this = (Oyun)malloc(sizeof(struct OYUN));
    this->tur = 0;
    this->kasa = 0;
    this->enZengin = NULL;
    this->oyun = &oyun;
}
