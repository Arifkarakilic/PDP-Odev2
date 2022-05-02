#include "Kisi.h"

Kisi new_Kisi(char* adSoyad, double para, double oran, int sayi){
    Kisi this;
    this = (Kisi)malloc(sizeof(struct KISI));
    this -> adSoyad = adSoyad;
    this -> para = para;
    this -> oran = oran;
    this -> sayi = sayi;
    this -> delete_Kisi = &delete_Kisi;

    return this;
}

void delete_Kisi(const Kisi this){
    if (this == NULL) return;
    free(this);
    
}