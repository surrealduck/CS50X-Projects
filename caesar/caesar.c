#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{

    string girilecek_metin;

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int key = atoi(argv[1]);

    if (key > 0)
    {
        girilecek_metin = get_string("plaintext: "); 
    }
    
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    printf("ciphertext: ");

    for (int i = 0; i < strlen(girilecek_metin); i++)
    {
        int ascii_sayisi = (int) girilecek_metin[i];

        key = key % 26;

        if (ascii_sayisi <= 64 || (ascii_sayisi >= 91 && ascii_sayisi <= 96) || (ascii_sayisi >= 123 && ascii_sayisi <= 127))

        {
            printf("%c", ascii_sayisi);
        }
        else 
        {
            int yeni_ascii_sayisi = key + ascii_sayisi;

            if (yeni_ascii_sayisi >= 91 && (ascii_sayisi >= 65 && ascii_sayisi <= 90) )
            {
                yeni_ascii_sayisi = yeni_ascii_sayisi - 26;
            }

            else if ( yeni_ascii_sayisi >= 123)
            {
                yeni_ascii_sayisi = yeni_ascii_sayisi - 26;
            }

            printf("%c", yeni_ascii_sayisi);
        }
    }
    printf("\n");
}