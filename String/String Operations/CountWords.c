#include <stdio.h>

int main()
{
    char s[] = "Hello World How are you";

    printf("Original String : %s\n", s);

    int i;
    int words = 0;
    for (i = 0; i < s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && s[i - 1] != ' ')
        {
            words++;
        }
    }
    words++;

    printf("Words: %d\n", words);

    return 0;
}
