#ifndef TP1_H_INCLUDED
#define TP1_H_INCLUDED
#include"entree_sortie.h"
void exercice1_tp1()
{
    long int n ;
    n=saisie1_tp1();
    affiche1_tp1(n);
}

void exercice2_tp1()
{
    long int n ;
    n=saisie2_tp1();
    affiche_premier_tp1(n);
}

void exercice3_tp1()
{
    long int nb;
    nb=saisie3_tp1();
    affiche3_tp1(nb);
}

void exercice4_tp1()
{
    int n =saisie4_tp1();
    facteurs_premiers(n);
}

void exercice5_tp1()
{
    long int n;
    int choix;
    printf("MENU PRINCIPAL \n");
    printf("1.probleme 1\n");
    printf("2.probleme 2\n");
    printf("3.probleme 3\n");
    printf("4.Quitter le programme\n");
    do
    {
        printf("donner un choix entre 1 et 4 :");
        scanf("%d", &choix);
    }while(!(choix>=1 && choix<=4));
    if(choix!=4)
        n=saisie1_tp1();
    switch(choix)
    {
      case 1:
            printf("Le carre de %ld = %ld \n",n, carre(n));
            break;
      case 2:
            if(somme_diviseur(n)%n==0)
                printf("%ld est multiparfait \n",n);
            else
                printf("%ld n'est pas multiparfait \n",n);
            break;
      case 3:
            if(divisible_13(n))
                printf("%ld est divisible par 13\n",n);
            else
                printf("%ld n'est pas  divisible par 13\n",n);
      case 4: break;
    }
}
void exercice6_tp1()
{
    long int
    n=saisie1_tp1();
    affiche(n);
}
#endif // TP1_H_INCLUDED
