#ifndef LENGTH_H
#define LENGTH_H

int Length(const char *text)
{
    int len=0;
    while(*text){
        len++;
        text++;
    }
    return len;
}

#endif // LENGTH_H
