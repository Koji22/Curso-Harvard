#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

string rotate(string word, int key);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int num = atoi(argv[1]);

    string plaintext = get_string("plaintext:  ");

    printf("ciphertext: ");
    printf("%s\n", rotate(plaintext,num));
}

string rotate(string word, int key)
{
    for (int a = 0; a < strlen(word); a++)
    {
        if (isupper(word[a]))
        {
            printf("%c", (word[a] - 65 + key) % 26 + 65);
        }
        else if (islower(word[a]))
        {
            printf("%c", (word[a] - 97 + key) % 26 + 97);
        }
        else
        {
            printf("%c", word[a]);
        }
    }
    return "";
}
