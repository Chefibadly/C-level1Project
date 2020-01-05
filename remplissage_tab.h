#ifndef REMPLISSAGE_TAB_H_INCLUDED
#define REMPLISSAGE_TAB_H_INCLUDED
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "fichiers.h"
#include "entree_sortie.h"
#include"TP2.h"

void annimation(char *text){

    int x;              //special dialogue
int taill;
    taill=strlen(text);
    for(x=0;x<taill;x++)
    {
        Sleep(100);
        printf("%c",text[x]);
    }
}


void Tab1()
{
    int T[50];
    int n;
    FILE *fp;
    char c;
    fp = fopen( "Tab1.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
           do
            {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
            /*       printf("Remplir le tableau  :\n ");
                     n = saisietaille();
        remplir1(T,n);
        Affiche(T,n);
        enregistrement(T,n,"Tab1.txt");

*/
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab1.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
   if (c == 'O' || c == 'o')
    {
        n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
        enregistrement(T,n,"Tab1.txt");
    }
    else
        printf("Fermeture de fichier...");
}

void Tab2()
{
    int T[50];
    int n;
    FILE *fp;
    char c;
    fp = fopen( "Tab2.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
            do
                {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab2.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
    if (c == 'O' || c == 'o')
    {
        n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
        enregistrement(T,n,"Tab2.txt");
    }
    else
        printf("Fermeture de fichier...");
}

void Tab3()
{
    int T[50];
    int n;
    FILE *fp;
    char c;
    fp = fopen( "Tab3.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
            do
                {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab3.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
    if (c == 'O' || c == 'o')
    {
        n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
        enregistrement(T,n,"Tab3.txt");
    }
    else
        printf("Fermeture de fichier...");
}

void Tab4()
{
    int T[50];
    int n;
    FILE *fp;
    char c;
    fp = fopen( "Tab4.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
            do
                {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab4.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
    if (c == 'O' || c == 'o')
    {
        n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
        enregistrement(T,n,"Tab4.txt");
    }
    else
        printf("Fermeture de fichier...");
}

void Tab5()
{
    int T[50];
    int n;
    FILE *fp;
    char c;
    fp = fopen( "Tab5.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
            do
                {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab5.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
    if (c == 'O' || c == 'o')
    {
        n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
        enregistrement(T,n,"Tab5.txt");
    }
    else
        printf("Fermeture de fichier...");
}

void Tab6()
{
    int T[50];
    int n;
    FILE *fp;
    char c;
    fp = fopen( "Tab6.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
            do
                {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab6.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
    if (c == 'O' || c == 'o')
    {
        n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
        enregistrement(T,n,"Tab6.txt");
    }
    else
        printf("Fermeture de fichier...");
}

void Tab7()
{
    int T[50];
    int n;

    FILE *fp;
    char c;
    fp = fopen( "Tab7.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
            do
                {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab7.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
    if (c == 'O' || c == 'o')
    {
        n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
        enregistrement(T,n,"Tab7.txt");
    }
    else
        printf("Fermeture du fichier...");
}

void Tab8()
{
    int T[50];
    int n;
    FILE *fp;
    char c;
    fp = fopen( "Tab8.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
            do
                {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab8.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
    if (c == 'O' || c == 'o')
       {
         n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
         enregistrement(T,n,"Tab8.txt");
       }
    else
        printf("Fermeture de fichier...");
}

void Tab9()
{
    int T[50];
    int n;
    FILE *fp;
    char c;
    fp = fopen( "Tab9.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
            do
                {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab9.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
    if (c == 'O' || c == 'o')
   {
     n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
     enregistrement(T,n,"Tab9.txt");
   }
   else
    printf("Fermeture du fichier...");
}


void Tab10()
{
    int T[50];
    int n;
    FILE *fp;
    char c;
    fp = fopen( "Tab10.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
            do
                {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab10.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
    if (c == 'O' || c == 'o')
   {
     n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
     enregistrement(T,n,"Tab10.txt");
   }
   else
    printf("Fermeture du fichier...");
}

void Tab11()
{
    int T[50];
    int n;
    FILE *fp;
    char c;
    fp = fopen( "Tab11.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
            do
                {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab11.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
    if (c == 'O' || c == 'o')
   {
     n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
     enregistrement(T,n,"Tab11.txt");
   }
   else
    printf("Fermeture du fichier...");
}
void Tab12()
{
    int T[50];
    int n;
    FILE *fp;
    char c;
    fp = fopen( "Tab12.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
            do
                {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab12.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
    if (c == 'O' || c == 'o')
    {
        n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
        enregistrement(T,n,"Tab12.txt");
    }
    else
        printf("Fermeture de fichier ...");


}

void Tab13()
{
    int T[50];
    int n;
    FILE *fp;
    char c;
    fp = fopen( "Tab13.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
            do
                {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab13.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
    if (c == 'O' || c == 'o')
    {
        n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
        enregistrement(T,n,"Tab13.txt");
    }
    else
        printf("Fermeture de fichier...");
}
void Tab14()
{
    int T[50];
    int n;
    FILE *fp;
    char c;
    fp = fopen( "Tab14.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
            do
                {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab14.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
    if (c == 'O' || c == 'o')
    {
        n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
        enregistrement(T,n,"Tab14.txt");
    }
    else
        printf("Fermeture de fichier...");
}
void Tab15()
{
    int T[50];
    int n;
    FILE *fp;
    char c;
    fp = fopen( "Tab15.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
            do
                {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab15.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
    if (c == 'O' || c == 'o')
    {
        n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
        enregistrement(T,n,"Tab15.txt");
    }
    else
        printf("Fermeture de fichier...");
}
void Tab16()
{
    int T[50];
    int n;
    FILE *fp;
    char c;
    fp = fopen( "Tab16.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
            do
                {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab16.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
    if (c == 'O' || c == 'o')
    {
        n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
        enregistrement(T,n,"Tab16.txt");
    }
    else
        printf("Fermeture de fichier...");
}
void Tab17()
{
    int T[50];
    int n;
    FILE *fp;
    char c;
    fp = fopen( "Tab17.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
            do
                {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab17.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
    if (c == 'O' || c == 'o')
    {
        n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
        enregistrement(T,n,"Tab17.txt");
    }
    else
        printf("Fermeture de fichier...");
}
void Tab18()
{
    int T[50];
    int n;
    FILE *fp;
    char c;
    fp = fopen( "Tab18.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
            do
                {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab18.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
    if (c == 'O' || c == 'o')
    {
        n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
        enregistrement(T,n,"Tab18.txt");
    }
    else
        printf("Fermeture de fichier...");
}

void Tab19()
{
    int T[50];
    int n;
    FILE *fp;
    char c;
    fp = fopen( "Tab19.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
            do
                {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab19.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
    if (c == 'O' || c == 'o')
    {
        n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
        enregistrement(T,n,"Tab19.txt");
    }
    else
        printf("Fermeture de fichier...");
}
void Tab20()
{
    int T[50];
    int n;
    FILE *fp;
    char c;
    fp = fopen( "Tab20.txt", "rb" );
    if (fp == NULL)
        {
            printf( "Le fichier ne contient aucun tableau.\n" );
            do
                {
                    printf("Voulez vous remplir le tableau  ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' || c == 'o' ||c == 'n'));

        }
    else
        {
            readFile("Tab20.txt");
            printf("\n");
            do
                {
                    printf("Voulez vous remplir de nouveau le tableau ? [O/N]: ");
                    scanf("%s",&c);
                }while(!(c == 'O' || c == 'N' ||c == 'o' || c == 'n'));
        }
    if (c == 'O' || c == 'o')
    {
        n = saisie_taille();
        remplir1_ex1_tp2(T,n);
        affiche1_ex1_tp2(T,n);
        enregistrement(T,n,"Tab20.txt");
    }
    else
        printf("Fermeture de fichier...");
}
#endif // REMPLISSAGE_TAB_H_INCLUDED
