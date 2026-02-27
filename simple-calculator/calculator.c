#include<stdio.h>
#include "calculator.h"

void display_menu(void){

    int choice;
    int break_loop=0;
    int a,b,res;
    printf("Simple Calculator \n 1) Add\n 2) Subtract\n 3) Multiply\n 4) Divide\n 0) Quit\n ");
    while (break_loop==0)
    {
       printf("Choice:");
       scanf("%d", &choice);
    if (choice<0 || choice>4){
       printf("Invalid choice\n");
       continue;
    }
    if (choice==0){
        printf("\n Bye!");
        break_loop=1 ;
    }
    switch (choice)
    {
    case 1:
        /* code */
        printf("A: ");
        scanf("%d",&a);
        printf("B: ");
        scanf("%d", &b);
        res=a+b;
        break_loop=1;
        break;
    case 2:
        /* code */
        printf("A: ");
        scanf("%d",&a);
        printf("B: ");
        scanf("%d", &b);
        res=a-b;
        break_loop=1;
        break;
    case 3:
        /* code */
        printf("A: ");
        scanf("%d",&a);
        printf("B: ");
        scanf("%d", &b);
        res=a*b;
        break_loop=1;
        break; 
    case 4:
        /* code */
        printf("A: ");
        scanf("%d",&a);
        printf("B: ");
        scanf("%d", &b);
        printf("%.2f", (float)a/b);
        return;
        break;    
    default:
        break;
    }

}
    printf("Result: %d", res);
}

int main(void)
{
  display_menu();
  return 0;  
}
