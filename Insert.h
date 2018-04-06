#ifndef INSERT_H
#define INSERT_H

char *Insert(char *text, const char *inp, int pos)
{
    char *s1=(char *)malloc(50);
    s1=SubStr(text,1,pos-1);
    int len=Length(text);
    char *s2=(char *)malloc(50);
    s2=SubStr(text,pos,len);

    s1=Concat(s1,inp);
    s1=Concat(s1,s2);
    free(s2);
    return s1;
}

#endif // INSERT_H
