#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{

    string girilecek_metin;

    string key = (argv[1]);

    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }

    int donusturulmus[strlen(key)];

//BIRINCI DONGU BASLANGICI

    for (int i = 0; i < strlen(key); i++)
    {
    if (isalpha(key[i]) == 0)  

        {
            printf("invalid keyword\n");
            return 1;
        }
    
    donusturulmus[i] = (int) key[i];

    if (donusturulmus[i] >= 65 && donusturulmus[i] <= 90)
    {
        donusturulmus[i] = donusturulmus[i] - 65;
    }

    else if (donusturulmus[i] >= 97 && donusturulmus[i] <= 122)
    {
        donusturulmus[i] = donusturulmus[i] - 97;
    }

    }
    girilecek_metin = get_string("plaintext: ");

    int eleman = 0;

    printf("ciphertext: ");

// IKINCI DONGU BASLANGICI

    for (int a = 0; a < strlen(girilecek_metin); a++)
    {
        if (girilecek_metin[a] <= 64 || (girilecek_metin[a] >= 91 && girilecek_metin[a] <= 96) || (girilecek_metin[a] >= 123 && girilecek_metin[a] <= 127))
        {
            printf("%c", girilecek_metin[a]);
        }
        else
        { 
        int sifrelenmis = donusturulmus[eleman]  + girilecek_metin[a];
        
        if (sifrelenmis >= 123 && isupper(girilecek_metin[a]) == false)
        { 
            sifrelenmis = (sifrelenmis % 123) + 97;
        }
        else if (sifrelenmis >= 91 && isupper(girilecek_metin[a]))
        {
            sifrelenmis = (sifrelenmis % 91) + 65;
        }

        eleman = eleman + 1;

        eleman = eleman % strlen(key);

        printf("%c", sifrelenmis);
        

        }
    }
    printf("\n");

}       
