#ifndef KISI_H
#define KISI_H


#include "stdio.h"
#include "stdlib.h"
#include "string.h"



struct KISI
{
    char* adSoyad;
    double para;
    double oran;
    int sayi;

    void (*delete)(struct KISI*);
};
typedef struct KISI* Kisi;
Kisi new_Kisi(char*, double, double, int);

void delete_Kisi(const Kisi);

#endif // KISI_H
