#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numPlaces (long n)
    {

    if (n == 0) return 1;

    return floor (log10 (labs (n))) + 1;
    }

int main(void)
{
    long input;

    do
    {
         input=get_long("Number:");
    }
    while (input < 0);

    long kart_no = input;

    if (input < 1000000000000 || input > 99999999999999999 || (100000000000000 > input && input > 9999999999999))
    { 
        printf("INVALID\n");
    }

    int hane = numPlaces(input);

    int bir;
    int iki;
    int uc;
    int dort;
    int bes;
    int alti;
    int yedi;
    int sekiz;
    int dokuz;
    int on;
    int on_bir;
    int on_iki;
    int on_uc;
    int on_dort;
    int on_bes;
    int on_alti;
        switch(hane)
        {    
            case 13:
                on_uc = input % 10;
                input = input / 10;
                on_iki = input % 10;
                input = input / 10;
                on_bir = input % 10;
                input = input / 10;
                on = input % 10;
                input = input / 10;
                dokuz = input % 10;
                input = input / 10;
                sekiz = input % 10;
                input = input / 10;
                yedi = input % 10;
                input = input / 10;
                alti = input % 10;
                input = input / 10;
                bes = input % 10;
                input = input / 10;
                dort = input % 10;
                input = input / 10;
                uc = input % 10;
                input = input / 10;
                iki = input % 10;
                input = input / 10;
                bir = input % 10;

                int on_iki_a = on_iki * 2;

                if (on_iki_a > 9)
                {
                    on_iki_a = (on_iki_a % 10) + 1;
                }

                int on_a = on * 2;

                if (on_a > 9)
                {
                   on_a = (on_a % 10) + 1;
                }

                int sekiz_a = sekiz * 2;

                if (sekiz_a > 9)
                {
                    sekiz_a = (sekiz_a % 10) + 1;
                }

                int alti_a = alti * 2;

                if (alti_a > 9)
                {
                    alti_a = (alti_a % 10) + 1;
                }

                int dort_a = dort * 2;

                if (dort_a > 9)
                {
                  dort_a = (dort_a % 10) + 1;
                }

                int iki_a = iki * 2;

                if (iki_a > 9)
                {
                   iki_a = (iki_a % 10) + 1;
                }

                int ilk_toplam = on_iki_a + on_a + sekiz_a + alti_a + dort_a + iki_a;
                int ikinci_toplam = on_uc + on_bir + dokuz + yedi+ bes + uc + bir;
                int asil_toplam = ilk_toplam + ikinci_toplam;

                if ( asil_toplam % 10 == 0 && (kart_no > 399999999999 && kart_no < 50000000000000) )
                {
                    printf("VISA\n");
                }
                else
                {
                    printf("INVALID\n");
                }
 
                break;
            case 15:
                on_bes = input % 10;
                input = input / 10;
                on_dort = input % 10;
                input = input / 10;
                on_uc = input % 10;
                input = input / 10;
                on_iki = input % 10;
                input = input / 10;
                on_bir = input % 10;
                input = input / 10;
                on = input % 10;
                input = input / 10;
                dokuz = input % 10;
                input = input / 10;
                sekiz = input % 10;
                input = input / 10;
                yedi = input % 10;
                input = input / 10;
                alti = input % 10;
                input = input / 10;
                bes = input % 10;
                input = input / 10;
                dort = input % 10;
                input = input / 10;
                uc = input % 10;
                input = input / 10;
                iki = input % 10;
                input = input / 10;
                bir = input % 10;

                int on_dort_b = on_dort * 2;

                if (on_dort_b > 9)
                {
                    on_dort_b = (on_dort_b % 10) + 1;
                }

                int on_iki_b = on_iki * 2;

                if (on_iki_b > 9)
                {
                    on_iki_b = (on_iki_b % 10) + 1;
                }

                int on_b = on * 2;

                if (on_b > 9)
                {
                   on_b = (on_b % 10) + 1;
                }

                int sekiz_b = sekiz * 2;

                if (sekiz_b > 9)
                {
                    sekiz_b = (sekiz_b % 10) + 1;
                }

                int alti_b = alti * 2;

                if (alti_b > 9)
                {
                    alti_b = (alti_b % 10) + 1;
                }

                int dort_b = dort * 2;

                if (dort_b > 9)
                {
                  dort_b = (dort_b % 10) + 1;
                }

                int iki_b = iki * 2;

                if (iki_b > 9)
                {
                   iki_b = (iki_b % 10) + 1;
                }

                int ilk_toplam_b = on_dort_b + on_iki_b + on_b + sekiz_b + alti_b + dort_b + iki_b;
                int ikinci_toplam_b = on_bes + on_uc + on_bir + dokuz + yedi+ bes + uc + bir;
                int asil_toplam_b = ilk_toplam_b + ikinci_toplam_b;

                if (asil_toplam_b % 10 == 0 && (bir == 3 && iki == 4 && numPlaces(kart_no) == 15))
                {
                    printf("AMEX\n");
                }

                else if (asil_toplam_b % 10 == 0 && (bir == 3 && iki == 7 && numPlaces(kart_no) == 15))
                {
                    printf("AMEX\n");
                }   
                else
                {
                    printf("INVALID\n");
                }
                
                break;
            case 16:
                on_alti = input % 10;
                input = input / 10;             
                on_bes = input % 10;
                input = input / 10;
                on_dort = input % 10;
                input = input / 10;
                on_uc = input % 10;
                input = input / 10;
                on_iki = input % 10;
                input = input / 10;
                on_bir = input % 10;
                input = input / 10;
                on = input % 10;
                input = input / 10;
                dokuz = input % 10;
                input = input / 10;
                sekiz = input % 10;
                input = input / 10;
                yedi = input % 10;
                input = input / 10;
                alti = input % 10;
                input = input / 10;
                bes = input % 10;
                input = input / 10;
                dort = input % 10;
                input = input / 10;
                uc = input % 10;
                input = input / 10;
                iki = input % 10;
                input = input / 10;
                bir = input % 10;

                int on_bes_c = on_bes * 2;

                if (on_bes_c > 9)
                {
                    on_bes_c = (on_bes_c % 10) + 1;
                }

                int on_uc_c = on_uc * 2;

                if (on_uc_c > 9)
                {
                   on_uc_c = (on_uc_c % 10) + 1;
                }

                int on_bir_c = on_bir * 2;

                if (on_bir_c > 9)
                {
                    on_bir_c = (on_bir_c % 10) + 1;
                }

                int dokuz_c = dokuz * 2;

                if (dokuz_c > 9)
                {
                    dokuz_c = (dokuz_c % 10) + 1;
                }

                int yedi_c = yedi * 2;

                if (yedi_c > 9)
                {
                  yedi_c = (yedi_c % 10) + 1;
                }

                int bes_c = bes * 2;

                if (bes_c > 9)
                {
                   bes_c = (bes_c % 10) + 1;
                }

                int uc_c = uc * 2;

                if (uc_c > 9)
                {
                   uc_c = (uc_c % 10) + 1;
                }

                int bir_c = bir * 2;

                if (bir_c > 9)
                {
                   bir_c = (bir_c % 10) + 1;
                }

                int ilk_toplam_c = on_bes_c + on_uc_c + on_bir_c + dokuz_c + yedi_c + bes_c + uc_c + bir_c;
                int ikinci_toplam_c = on_alti + on_dort + on_iki + on + sekiz + alti + dort + iki;
                int asil_toplam_c = ilk_toplam_c + ikinci_toplam_c;

                if (  asil_toplam_c % 10 == 0 && kart_no < 5000000000000000 && kart_no >= 4000000000000000)
                 {
                     printf("VISA\n");
                 }

                else if (  asil_toplam_c % 10 == 0 && kart_no < 5600000000000000 && kart_no >=                                5100000000000000)
                 {
                     printf("MASTERCARD\n");
                 }
                  else
                {
                    printf("INVALID\n");
                }

                break;
        }
   
}