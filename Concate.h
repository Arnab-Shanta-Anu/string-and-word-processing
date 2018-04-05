#ifndef CONCAT_H
#define CONCAT_H

char *Concat(char *s1, char *s2)
{
    int i,r=strlen(s1),s=strlen(s2);
    char *s3=malloc((r+s)*sizeof(char));

    for(i=0;i<r;i++){
        s3[i]=s1[i];
    }
    for(i=0;i<s;i++){
        s3[r+i]=s2[i];
    }
    s3[r+i]='\0';

    return s3;
}
#endif // CONCAT_H
