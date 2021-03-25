
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
enum en{
    intValue,
    sValue
};

struct st
{
    int iValue;
    char stringValue[30];
    enum en type;
};

void printValue(struct st* pU ) {
    if (intValue == pU->type) {  
    printf("INT: %d\n", pU->iValue);
    }
    else if (sValue == pU->type) {
    printf("STR: %s\n", pU->stringValue);
}
}

void StringToInt(struct st* pSt){
    int x = atoi(pSt->stringValue);
    pSt->type = intValue;
    pSt->iValue = x;
}
 
int main() {
    struct  st st1 = {.stringValue = "123",.type = intValue};
    StringToInt(&st1);
    printValue(&st1);
    return 0;
}  