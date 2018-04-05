#ifndef INDEX_H
#define INDEX_H

/***********************************
** returns the first index       **
** of ocurence of pat in text **
** -999 if not found                **
************************************/
int Index(char *text, char *pat)
{
    int i,j=0,MAX=strlen(text)-strlen(pat),r=strlen(pat),s=strlen(text);

    for(i=0; i<=MAX; i++){
        //printf("%d\t",i);
        for(j=0; j<r; j++){
            if(text[i+j]!=pat[j])
                break;
        }

        if(j==r){
            return i;
        }
    }
    return -999;
}

#endif // INDEX_H
