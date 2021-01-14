#include <stdio.h>

int main()
{
    char s[] = "Hello Everyone";
    int vovels = 0;
    int consonants = 0;
    printf("Original String : %s\n", s);

    int i;
    for (i = 0; i < s[i] != '\0'; i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
            s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
           vovels++;
        }
        else if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
           consonants++;
    }

    printf("vovels: %d\n", vovels);
    printf("consonants: %d\n", consonants);

    return 0;
}
