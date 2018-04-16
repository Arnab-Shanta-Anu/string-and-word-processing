#ifndef REPLACE_H
#define REPALCE_H

char *Rep(char *text, char *pat_to_find, char *pat_to_rep)
{
    int i=Index(text,pat_to_find);
    char *tmp=(char *)malloc(100*sizeof(char));
    if(i==-999){
        printf("Pat not found\n");
        exit(EXIT_FAILURE);
    }
    tmp=Delete(text,i+1,Length(pat_to_find));
    tmp=Insert(text,pat_to_rep,i+1);
    return tmp;
}

#endif // REPLACE_H
