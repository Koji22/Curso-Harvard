#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

char letters_upper[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char letters_lower[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string Text;
    int L, W, S, index;
    Text = get_string("Text: ");
    L = count_letters(Text);
    W = count_words(Text);
    S = count_sentences(Text);

    float I = (0.0588 * L / W * 100) - (0.296 * S/W * 100) - 15.8;
    index = round(I);

    if (index >= 1 && index <= 16)
        printf("Grade %i\n",index);

    else if (index < 1)
        printf("Before Grade 1\n");

    else if (index >= 16)
        printf("Grade 16+\n");
}

int count_letters(string text)
{
    int letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') ||
            (text[i] >= 'A' && text[i] <= 'Z'))
            letters++;
    }
    return letters;
}

int count_words(string text)
{
    int words = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
            words++;
    }
    return words;
}


int count_sentences(string text)
{
    int sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] =='?' || text[i]=='!')
            sentences++;
    }
    return sentences;
}