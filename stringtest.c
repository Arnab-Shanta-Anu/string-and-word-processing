#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "SubString.h"
#include "INDEX.h"
#include "Concate.h"
#include "Length.h"
#include "Delet.h"

#define P printf
#define alc(x) ((char *)malloc(x))
#define rlc(ptr,sz) ((char *)realloc(ptr,sz))

int main()
{
    P("/*******************initial*************************/\n\n");
    char *t=alc(50);
    strcpy(t,"To be or not to be\0");
    printf("%s\n\n",t);
    char *tn=(char *)realloc(t,100);
    tn=Concat(tn," bool");
    printf("%s\n\n",tn);
    P("/*******************     end    *************************/\n\n\n\n");


    P("/*******************substr check*************************/\n\n");
    char *s1=alc(50);
    s1=SubStr(t,1,5);
    printf("%s\n\n",s1);
    P("/*******************     end    *************************/\n\n\n\n");


    P("/*******************substr check*************************/\n\n");//index check
    int k=Index(t,"or\0");
    printf("Pattern found at index: %d\n\n",k+1);
    P("/*******************     end    *************************/\n\n\n\n");


    P("/*******************substr check*************************/\n\n");//concatenation check
    char *a=alc(500);
    a=Concat(t," abc\0");
    printf("%s\n\n",a);
    P("/*******************     end    *************************/\n\n\n\n");


    P("/*******************substr check*************************/\n\n");//length check
    int l=Length(a);
    printf("Length of str a is : %d\n\n",l);
    P("/*******************     end    *************************/\n\n\n\n");


    P("/*******************substr check*************************/\n\n");//delete checking
    strcpy(a,"Arnab is great");
    printf("%s\n\n",a);
    a=Delete(a,5,4);
    printf("%s\n\n",a);
    P("/*******************     end    *************************/\n\n\n\n");


    return 0;
}
