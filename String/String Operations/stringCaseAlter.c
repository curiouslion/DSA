#include <stdio.h>

int main()
{
    char s[] = "WelCOmE";
    printf("Original String Case : %s\n", s);

    int i;
    for (i = 0; i < s[i] != '\0'; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
        else if (s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
    }

    printf("Alter String Case : %s\n", s);

    return 0;
}
