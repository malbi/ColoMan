#include"menu.h"

int menu(void){
  int choix = 0;
  while((choix > 5) || (choix <= 0)){
    printf("Choisissez une action:\n1. Gestion des comptes\n2. Liste de courses\n3. Laisser un message\n4. Organiser une soiree\n5. Quitter\n");
    scanf("%i", &choix);
    switch(choix){
    case 1 :
      printf("Bienvenue dans la gestion des comptes!\n");
      break;
    case 2 :
      printf("2\n");
      break;
    case 3 :
      printf("3\n");
      break;
    case 4 :
      printf("4\n");
      break;
    case 5 :
      printf("5\n");
      return 0;
      break;
    default :
      printf("Wrong choice you fool!\n");
    }
  }
  return 0;
}
