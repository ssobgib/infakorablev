#include "lh.h"
#include <stdio.h>

int main()
{
    int c;
    printf("Vvedite nomer labi\n");
    scanf("%d",&c);
    switch(c){
    case(1):lab1();break;
    case(2):lab2();break;
    case(3):lab3();break;
    case(4):lab4();break;
    case(5):lab5();break;
    case(6):lab6();break;
    case(7):lab7();break;
    }
    return 0;
}
