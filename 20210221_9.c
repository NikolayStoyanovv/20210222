/* Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача. */
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
enum en{
    intValue,
    stringValue
};

struct st
{
    int iValue;
    char stringValue[54];
    enum en type;
};

void printValue(struct st* ptr ) {
    if (intValue == ptr->type) {  
    printf("INT: %d\n", ptr->iValue);
    }
    else if (stringValue == ptr->type) {
    printf("STR: %s\n", ptr->stringValue);
}
}   

void stringToInt(struct st* ptr2){
    int x;
    x = atoi(ptr2->stringValue);
    ptr2->type = intValue;
    ptr2->iValue = x;
}
 
int main( ) {
    struct  st st1 = {.stringValue = "123",.type = intValue};
    stringToInt(&st1);
    printValue(&st1);
    return 0;
}  