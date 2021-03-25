/*Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана.  */
#include<stdio.h>
#include <string.h>
#include<stdlib.h>
struct elements{
    char name[128];
    float price;
    int quality;
};
int main(){
    struct elements choco;
    choco.quality = 50;
    strcpy (choco.name , "chocolate");
    choco.price = 2.50;

    printf( "Product name : %s\n", choco.name);
    printf( "Product price : %f\n", choco.price);
    printf( "Product quality : %d\n", choco.quality);

    return 0;
}