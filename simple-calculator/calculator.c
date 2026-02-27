#include<stdio.h>
#include "calculator.h"

void display_menu(void){
    int choice;
    int break_loop=0;
    printf("Simple Calculator \n 1) Add\n 2) Subtract\n 3) Multiply\n 4) Divide\n 0) Quit\n ");
    while (break_loop==0)
    {
       printf("Choice:");
       scanf("%d", &choice);
    if (choice<0 || choice>4){
       printf("Invalid choice\n");
    }
    if (choice==0){
        printf("\n Bye!");
        break_loop=1 ;
    }

    }
    


}

int main(void)
{

  return 0;  
}
