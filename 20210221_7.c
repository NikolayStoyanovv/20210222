/* Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана. */
#include <stdio.h>
#include <string.h>
union u
{
    int intValue;
    float floatValue;
    char stringValue[54];

    
};
int main( ) {
    union  u u1;
    u1.intValue = 5;
    printf("intValue =%d\n",u1.intValue);
    u1.floatValue = 3.5;
    printf("floatValue =%f\n",u1.floatValue);
    strcpy(u1.stringValue,"test");
    printf("stringValue = %s\n",u1.stringValue);

    return 0;
} 