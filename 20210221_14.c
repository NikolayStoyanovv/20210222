/* Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma pack(1)

enum bits
{
    FOUR,
    EIGHT,
    SIXTEEN,
    INT
};
struct st{
    int a : 5;
    int b : 9;
    int c : 17;
    int d;
    enum bits type;
};


void initUn(struct st* t,int z){
    if (z<15)
    {
        t->a = z;
        t->type = FOUR;
    }
    else if (z<255)
    {
        t->b = z;
        t->type = EIGHT;
    }
    else if (z<65535)
    {
        t->c = z;
        t->type = SIXTEEN;
    }
    else{
        t->d = z;
        t->type = INT;
    }
    
}
void printUn(struct st* s){
    if (s->type == FOUR)
    {
        printf("%d",s->a);
    }
    else if (s->type == EIGHT)
    {
        printf("%d",s->b);
    }
    else if (s->type == SIXTEEN)
    {
        printf("%d",s->c);
    }
    else if (s->type == INT)
    {
        printf("%d",s->d);
    }
    
    
}
 
int main( ) {
    struct st s;
    int a = 254;
    
    initUn(&s,a);
    printUn(&s);
}