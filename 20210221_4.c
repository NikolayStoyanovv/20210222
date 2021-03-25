/* Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина.
struct name newvariable = {21,2,2020};
newvariable.memeber = value;
struct name newvariable = {.memeber3=2020,.member1=21, .memeber2=2}; */
#include <stdio.h>
#include <string.h>
struct date
{
    int year;
    int month;
    int day;
    
};
int main( ) {
    struct date d = {2020,10,30};
    struct date d2 = {.year = 2020,.day = 15, .month = 5};
    struct date d3;
    d3.day = 16;
    d3.year = 1999;
    d3.month = 9;
    return 0;
}