char *SubStr(char *text, int pos, int len)
{
    char S[50];
    int i,j=0;
    for(i=pos-1;i<len+pos;i++){
        S[j]=text[i];
        j++;
    }
    S[j]='\0';

    return S;
}
