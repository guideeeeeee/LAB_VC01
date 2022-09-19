#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void SubFunc1(void);
void main() 
{
    printf("\n Message in Function main");
    SubFunc1();
    printf("\nReturned to Function main\n"); //breakpoint เป็นการหยุดโค้ดไว้ชั่วคราวจนกว่าเราจะกดF10 เพื่อรันต่อ
    system("pause");
}
void SubFunc1(void)
{
    printf("\n Message from Subfunction");
    return;
}