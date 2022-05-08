/** *
* @author Suleyman Arif Karakilic
* @since 15 Mart 2022
* 1.Ögretim / C
* */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Kisi.h"
#include "Dosya.h"
#include "Oyun.h"



int main()
{
 Oyun oyun = new_Oyun();
 oyun->oyun(oyun);
 free(oyun);
 oyun->delete_Oyun(oyun);
 }
