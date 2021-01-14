#include <stdio.h>

int main()
{
    char s[] = "WELCOME";
    printf("Original String Case : %s\n", s);


    int i;
    for (i = 0; i < s[i] != '\0'; i++)
    {
        s[i] = s[i] + 32;
    }

    printf("Change Case String is %s\n", s);

    return 0;
}
