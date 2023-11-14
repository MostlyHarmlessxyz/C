#include <cs50.h>
#include <stdio.h>
#include <strings.h>
#include <ctype.h>

int count_letters (string text);
int count_words (string text);
int count_sentences (string text);

int main(void)
{
    string pages = get_string("Text: ");
    int letters = count_letters(pages);
    int words = count_words(pages);
    int sentences = count_sentences(pages);
    double L = ((double) letters / words) * 100;
    double S = ((double) sentences / words) * 100;
    double index = 0.0588 * L - 0.296 * S - 15.8;
    if(index >=1 && index <= 16)
    {
        printf("Grade %d\n",(int)index);
    }else if(index < 1)
    {
        printf("Before Grade 1\n");
    }else
    {
        printf("Grade 16+\n");
    }

}



int count_letters (string text)
{
    int sum = 0;
    int i;
    int length = strlen(text);
    for(i = 0; i < length; i++)
    {
        if(isupper(text[i]) + islower(text[i]))
        {
            sum++;
        }
    }
    return sum;
}

int count_words (string text)
{
    int sum = 0;
    int i;
    int length = strlen(text);
    for(i = 0; i < length; i++)
    {
        if(text[i] == ' ')
        {
            sum++;
        }
    }
    return sum+1;
}
int count_sentences (string text)
{
    int sum = 0;
    int i;
    int length = strlen(text);
    for(i = 0; i < length; i++)
    {
        if(text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sum++;
        }
    }
    return sum;
}