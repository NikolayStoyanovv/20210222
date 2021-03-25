#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma pack(1)
enum e {ONE,TWO,THREE};
struct st
{
    int iValue;
    char str[50];
    double dValue;
    enum e en;
};

 
int main( ) {
    FILE *fpt;
    fpt = fopen("MyFile.csv", "w+");
    struct st st1[4] = {
        {.iValue = 4, .dValue = 1.1, .str = "Fisher is the best", .en = THREE},
        {.iValue = 3, .dValue = 1.5, .str = "Hello World", .en = TWO},
        {.iValue = 16, .dValue = 5.5, .str = "Hey you", .en = ONE},
        {.iValue = 35, .dValue = 0.5, .str = "This is awesome", .en = ONE},
    };
    for (int i = 0; i < 4; i++)
    {
        fprintf(fpt,"char[]: %s, int value: %d, doubleValue: %lf, enum value: %d\n",st1[i].str,st1[i].iValue,st1[i].dValue,st1[i].en);
    }
    fclose(fpt);
    return 0;
}