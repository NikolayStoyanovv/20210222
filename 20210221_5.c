#include <stdio.h>
#include <string.h>
struct date
{
    int year;
    int month;
    int day;
    
};
int main( ) {
    struct date d[10] = 
    {{2021,2,15},{1999,7,9},{2019,3,5},{2018,16,5},{2010,8,7},
    {2020,7,15},{2021,9,5},{2021,8,9},{2012,8,28},{2011,6,15}
    };

    return 0;
}