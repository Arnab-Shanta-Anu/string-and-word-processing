#include<stdio.h>
#include"SubString.h"

int main()
{
    char *t="To be or not to be";
    char *s1=SubStr(t,1,5);
    printf("%s",s1);

    return 0;
}
