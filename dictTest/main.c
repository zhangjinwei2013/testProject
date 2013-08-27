#include <stdio.h>
#include "dict.h"

int main()
{
    dictType *type;
    dict *d = dictCreate(type,NULL);
    int key = 10;
    int value = 20;
    dictAdd(d,(void *)&key,(void *)&value);
    printf("%d\n",key);
    return 0;
}
