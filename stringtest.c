#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"SubString.h"
#include"INDEX.h"
#include"Concate.h"

int main()
{
    char *t="To be or not to be";

    //substr check
    char *s1=SubStr(t,1,5);
    printf("%s\n\n",s1);

    //index check
    int k=Index(t,"or");
    printf("Pattern found at index: %d\n\n",k+1);

    //concatenation check
    char *a=Concat(t," abc");
    printf("%s\n\n",a);

    //

    return 0;
}
