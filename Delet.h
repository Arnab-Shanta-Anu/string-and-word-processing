#ifndef DELET_H
#define DELET_H

char *Delete( char *text,  int pos,  int len)
{
    char *s1=(char *)malloc(pos);
    s1=SubStr(text,1,pos-1);
    printf("s1=%s\n\n",s1);
    int p=Length(text);
    char *s2=(char *)malloc(p-len-pos);
    s2=SubStr(text,pos+len,p);

    free(text);
    int mx=Length(s1)+Length(s2);
    char *s3=(char *)malloc(mx);
    s3=Concat(s1,s2);
    return s3;
}

#endif // DELET_H
