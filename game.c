#include <stdio.h>

int main(void)
{
    char color[20];
    char pluralNoun[20];
    char celebrity[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural nout: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s", celebrity);
    
    printf("Rosese are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s\n", celebrity);

    return 0;
}