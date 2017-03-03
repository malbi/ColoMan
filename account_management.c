#include"account_management.h"

int account_menu(void){
  int choice = 0;
  while((choice <= 0) || (choice > 2)){
    printf("Please select an action:\n1. Add a bill\n2. Quit");
    scanf("%i", &choice);
    switch(choice){
    case 1:
      printf("add_bill();\n");
      break;
    case 2:
      return 0;
      break;
    default:
      printf("Wrong choice!");
    }
  }
}
