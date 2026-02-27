#include<stdio.h>
#include "calculator.h"

void display_menu(void){
    int choice;
    printf("Simple Calculator \n 1) Add\n 2) Subtract\n 3) Multiply\n 4) Divide\n 0) Quit\n Choice: ");
    scanf("%d", &choice);
    if (choice==0){
        printf("\n Bye!");
        return ;
    }

}

int main(void)
{

  display_menu();
  return 0;  
}
