#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

#include "SubString.h"
#include "INDEX.h"
#include "Concate.h"
#include "Length.h"
#include "Delet.h"
#include "Insert.h"
#include "Replace.h"

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


    P("/*******************index check*************************/\n\n");
    int k=Index(t,"or\0");
    printf("Pattern found at index: %d\n\n",k+1);
    P("/*******************     end    *************************/\n\n\n\n");


    P("/*******************concatenation check*************************/\n\n");
    char *a=alc(500);
    a=Concat(t," abc\0");
    printf("%s\n\n",a);
    P("/*******************     end    *************************/\n\n\n\n");


    P("/*******************length check*************************/\n\n");
    int l=Length(a);
    printf("Length of str a is : %d\n\n",l);
    P("/*******************     end    *************************/\n\n\n\n");


    P("/*******************delete check*************************/\n\n");
    strcpy(a,"Arnab is great");
    printf("%s\n\n",a);
    a=Delete(a,5,4);
    printf("%s\n\n",a);
    P("/*******************     end    *************************/\n\n\n\n");


    P("/*******************insert check*************************/\n\n");
    strcpy(a,"Arnab is great");
    printf("%s\n\n",a);
    a=Insert(a," are",6);
    printf("%s\n\n",a);
    P("/*******************     end    *************************/\n\n\n\n");

    a=Rep(a," are"," is");/**this needs work***/
    printf("%s\n\n",a);

    return 0;
}
