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
    void (*delete_Oyun)(struct OYUN*);
};
typedef struct OYUN* Oyun;

Oyun new_Oyun();
void delete_Oyun(const Oyun);




#endif // OYUN_H
