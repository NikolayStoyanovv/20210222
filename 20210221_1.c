/* Задача 1. Дефиниране и инициализация на обединение */
#include <stdio.h>
union tagMyData {
    int m_nValue;
    float m_fValue;
    char m_szText[64];
};
int main( ) {
    union tagMyData data = { 13 };
    printf( "Memory size : sizeof(data) : %ld\n", sizeof(data));
    printf( "nValue: %d, fValue: %f, Text: %s\n",data.m_nValue,
    data.m_fValue, data.m_szText);
return 0;
}