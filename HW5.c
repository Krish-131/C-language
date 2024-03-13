#include<stdio.h>
int main()
{
    float inch;
    int cm;
    printf("Enter value of cm:");
    scanf("%d",&cm);

    inch=cm*2.56;
    printf("inch=%f",inch);

    return 0;

}