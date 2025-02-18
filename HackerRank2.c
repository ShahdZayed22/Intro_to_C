#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
char ch;
char s[10];
char t[100];
scanf("%c", &ch);
scanf("%s", s);
getchar();
scanf("%[^\n]%*s", t);

printf("%c\n",ch);
printf("%s\n",s);
printf("%s\n",t);

    return 0;
}
