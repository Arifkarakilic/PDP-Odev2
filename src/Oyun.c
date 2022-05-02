#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
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
    double parasi = 0;
    Kisi enZengin = kisiler[0];
    for (int i = 0; i < sansliSayi; i++)
    {
        // printf("Sansli Sayi: %d\n", sansliSayilar[i]);
        for (int j = 0; j < kisiSayisi; j++)
        {

            if (kisiler[j]->para > 1000)
            {
                double degisken = kisiler[j]->para * kisiler[j]->oran * 9;
                double degisken2 = kisiler[j]->para * kisiler[j]->oran;
                if (kisiler[j]->sayi == sansliSayilar[i])
                {

                    kisiler[j]->para += degisken;
                    masabakiye = masabakiye - degisken;
                }
                else
                {

                    kisiler[j]->para -= degisken2;
                    //printf("parasiii %lf",kisiler[j]->para);
                    masabakiye = masabakiye + degisken2;
                }
                if (kisiler[j]->para > enZengin->para)
                {
                    enZengin = kisiler[j];
                    //printf("parasi1 %lf, adi %s, asil para%lf\n",enZengin->para, kisiler[j]->adSoyad,kisiler[j]->para);
                }
            }
        }
        tur++;
        system("CLS");

        COORD s1, s21, s22, s3, s4, s51, s52, s61, s62, s71, s72, s81, s82, s83, s91, s92, s101, s102, s111, s112, s121, s122, s13, ss, t1, mb1, ez, eza, ezb;

        s1.X = 34;
        s1.Y = 2;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s1);

        for (int s1d = 0; s1d < 45; s1d++)
        {
            printf("#");
        }

        s21.X = 34;
        s21.Y = 3;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s21);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }

        s22.X = 77;
        s22.Y = 3;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s22);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }

        s3.X = 34;
        s3.Y = 4;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s3);

        for (int s1d = 0; s1d < 45; s1d++)
        {
            printf("#");
        }
        s4.X = 34;
        s4.Y = 5;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s4);

        for (int s1d = 0; s1d < 45; s1d++)
        {
            printf("#");
        }
        s51.X = 34;
        s51.Y = 6;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s51);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }
        s52.X = 77;
        s52.Y = 6;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s52);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }

        s61.X = 34;
        s61.Y = 7;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s61);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }
        s62.X = 77;
        s62.Y = 7;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s62);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }

        s71.X = 34;
        s71.Y = 8;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s71);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }
        s72.X = 77;
        s72.Y = 8;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s72);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }

        s81.X = 34;
        s81.Y = 9;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s81);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }
        s82.X = 77;
        s82.Y = 9;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s82);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }
        s83.X = 36;
        s83.Y = 9;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s83);

        for (int s1d = 0; s1d < 41; s1d++)
        {
            printf("-");
        }

        s91.X = 34;
        s91.Y = 10;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s91);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }
        s92.X = 77;
        s92.Y = 10;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s92);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }

        s101.X = 34;
        s101.Y = 11;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s101);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }
        s102.X = 77;
        s102.Y = 11;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s102);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }

        s111.X = 34;
        s111.Y = 12;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s111);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }
        s112.X = 77;
        s112.Y = 12;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s112);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }
        s121.X = 34;
        s121.Y = 13;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s121);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }
        s122.X = 77;
        s122.Y = 13;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s122);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }

        s13.X = 34;
        s13.Y = 14;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), s13);

        for (int s1d = 0; s1d < 45; s1d++)
        {
            printf("#");
        }

        ss.X = 50;
        ss.Y = 3;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), ss);

        printf("SANSLI SAYI: %d", sansliSayilar[i]);

        t1.X = 50;
        t1.Y = 6;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), t1);

        printf("TUR: %d", tur);

        mb1.X = 42;
        mb1.Y = 7;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), mb1);

        printf("MASA BAKIYE: %.2lf", masabakiye);

        ez.X = 50;
        ez.Y = 10;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), ez);

        printf("EN ZENGIN KISI: ");

        eza.X = 50;
        eza.Y = 11;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), eza);

        printf("%s ", enZengin->adSoyad);

        ezb.X = 42;
        ezb.Y = 12;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), ezb);

        printf("%.2lf", enZengin->para);

        sleep(0.9);
    }
    system("CLS");

        COORD o1, o21, o22, o31, o32, o41, o42, o51, o52, o53, o61, o62, o63, o71, o72, o81, o82, o91, o92, o10, t2, mb2;

        
        o1.X = 34;
        o1.Y = 2;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o1);

        for (int s1d = 0; s1d < 45; s1d++)
        {
            printf("#");
        }
        o21.X = 34;
        o21.Y = 3;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o21);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }

        o22.X = 77;
        o22.Y = 3;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o22);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }
        o31.X = 34;
        o31.Y = 4;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o31);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }

        o32.X = 77;
        o32.Y = 4;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o32);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }

        o41.X = 34;
        o41.Y = 5;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o41);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }

        o42.X = 77;
        o42.Y = 5;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o42);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }

        o51.X = 34;
        o51.Y = 6;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o51);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }

        o52.X = 77;
        o52.Y = 6;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o52);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }
        o53.X = 36;
        o53.Y = 6;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o53);

        for (int s1d = 0; s1d < 41; s1d++)
        {
            printf("-");
        }
        o61.X = 34;
        o61.Y = 7;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o61);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }

        o62.X = 77;
        o62.Y = 7;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o62);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }
        o63.X = 50;
        o63.Y = 7;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o63);

        printf("OYUN BITTI");

        o71.X = 34;
        o71.Y = 8;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o71);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }

        o72.X = 77;
        o72.Y = 8;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o72);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }
        o81.X = 34;
        o81.Y = 9;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o81);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }

        o82.X = 77;
        o82.Y = 9;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o82);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }

        o91.X = 34;
        o91.Y = 10;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o91);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }

        o92.X = 77;
        o92.Y = 10;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o92);

        for (int s1d = 0; s1d < 2; s1d++)
        {
            printf("#");
        }
        o10.X = 34;
        o10.Y = 11;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), o10);

        for (int s1d = 0; s1d < 45; s1d++)
        {
            printf("#");
        }

        t2.X = 50;
        t2.Y = 3;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), t2);

        printf("TUR: %d", tur);

        mb2.X = 42;
        mb2.Y = 4;

        SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE), mb2);

        printf("MASA BAKIYE: %.2lf", masabakiye);
}

Oyun new_Oyun()
{
    Oyun this;
    this = (Oyun)malloc(sizeof(struct OYUN));
    this->tur = 0;
    this->kasa = 0;
    this->enZengin = NULL;
    this->oyun = &oyun;
    // this->yazdir = &yazdir;
}
