#ifndef OYUN_H
#define OYUN_H

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "Kisi.h"


struct OYUN
{
    int* sansliSayilar;
    Kisi* kisiler;
    int tur;
    double kasa;
    char* enZengin;

    void (*oyun)(struct OYUN*);
    //void (*yazdir)(struct OYUN*);
    void (*delete)(struct OYUN*);
};
typedef struct OYUN* Oyun;

Oyun new_Oyun();




#endif // OYUN_H
