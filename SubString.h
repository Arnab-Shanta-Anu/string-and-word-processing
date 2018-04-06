char *SubStr(char *text, int pos, int len)
{
    char *S = malloc(len*sizeof(char));
    int i,j=0;
    for(i=pos-1;i<pos+len;i++){
        S[j++]=text[i];
    }
    S[j]='\0';

    return S;
}
