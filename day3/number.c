#include<stdio.h>
int main()
{
    char op;
    int a=3,b=8;
    printf("enter the operator");
    scanf("%c",&op);
    switch(op){
         case '+':
         printf("result=%.2f\n",a+b);
         break; 
    }
    return 0;
}