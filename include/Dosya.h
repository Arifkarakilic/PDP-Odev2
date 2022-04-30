#ifndef DOSYA_H
#define DOSYA_H


#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "Kisi.h"


struct DOSYA
{
    Kisi* kisi;
    int* sayi;


    Kisi* (*kisiOku)( struct DOSYA*, int *kisiSayisi);
    int* (*getSayi)(struct DOSYA*, int* sansliSayi);
    void (*delete)(struct DOSYA*);
};
typedef struct DOSYA* Dosya;

Dosya new_Dosya();
// short* getSayi(const Dosya);
// Kisi* kisiOku( const Dosya);
// void delete_Dosya(const Dosya);



#endif // DOSYA_H
