#include <stdio.h>
#include "cs50.h"
#include <ctype.h>
#include <string.h>
#include <math.h>
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // prompt the use for some text
    string text = get_string("Text: ");
    // count the number of letters, words, and sentences in the text
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);
    // compute the coleman-liau index
    float L = (float) letters / words *100;
    float s = (float) sentences / words *100;
    float index = 0.0588 * L - 0.296 * s - 15.8;
    // round the index to the nearest whole number
    int grade = round(index);
    // print the grade level
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else 
    {
        printf("Grade %i\n", grade);

    }
}
int count_letters(string text)
{
    // return the number of letters in the text
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha((unsigned char) text[i]))
        {
            count++;
        }
    }
    return count;

}
int count_words(string text)
{
    //return the number of words in the text 
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isspace((unsigned char) text[i]))
    { 
        count++;
    }
    }
    return count;
}
int count_sentences(string text)
{
    // count the number of sentences int the text
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
    }
    return count;   
}