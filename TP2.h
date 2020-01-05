#ifndef TP2_H_INCLUDED
#define TP2_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include"entree_sortie.h"

void exercice1_1_tp2 ()
{
    int t1[50],v1[50];
    int n1;
    //printf("\n***CHARGEMENT T1*** \n");
    recuperation(t1,"tab1.txt");
    n1=recuperation(t1,"tab1.txt");
    /*n1=saisie_taille();
    remplir1_ex1_tp2(t1,n1);*/
    transfert(t1,v1,n1);
    printf("\n*** CONTENU DE T1***\n");
    affiche1(t1,n1);
    printf("\n*** CONTENU DE v1*** \n");
    affiche1(v1,n1);
}


void exercice1_2_tp2 ()
{
    int t2[50] , x[50];
    int n2 ;
    //printf("\n***CHARGEMENT T2*** \n");
    n2=recuperation(x,"tab2.txt");
    recuperation(x,"tab2.txt");
    printf("\n*** CONTENU DE T2***\n");
    affiche1(t2,n2);
    if(symetriques(t2,n2))
        printf("\n***t2 est symetrique*** \n");
    else
        printf("\n***t2 n'est pas symetrique*** \n");
}

void exercice1_3_tp2 ()
{
    int t3[50];
    int n3;
    //printf("\n***CHARGEMENT T3*** \n");
    n3=saisie_taille();
    remplir1_ex1_tp2(t3,n3);
    printf("\n****CONTENU DE T3 anvant inversion****\n");
    affiche1(t3,n3);
    inverse(t3,n3);
    printf("\n****CONTENU DE T3 apres inversion****\n");
    affiche1(t3,n3);
}

void exercice1_4_tp2 ()

{
    int t4[50];
    int n4,k;
    //printf("\n***CHARGEMENT T4*** \n");
    n4=saisie_k(n4);
    remplir1_ex1_tp2(t4,n4);
    printf("\n*** CONTENU DE T4 anvant %d rotation***\n",k);
    affiche1_ex1_tp2(t4,n4);
}

void exercice1_5_tp2 ()
{
        int t5[50];
        int n5;
        //printf("\n****CHARGEMENT T5****\n");
        n5=saisie_taille();
        remplir1_ex1_tp2(t5,n5);
        printf("\n****CONTENU DE T5 avant l'insertion****\n");
        affiche1_ex1_tp2(t5,n5);
        printf("\n****CONTENU DE T5 apres l'insertion****\n");
        insertion(t5,n5);


}
void exercice1_6_tp2 ()
{
        int t6[50];
        int t7[50];
        int v2[50];
        int n6,n7,k;
        //printf("\n****CHARGEMENT T6****\n");
        n6=recuperation(t6,"Tab6.txt");
        //remplir1_ex1_tp2(t6,n6);
        //printf("\n****CHARGEMENT T7****\n");
        n7=recuperation(t7,"Tab7.txt");
        //remplir1_ex1_tp2(t7,n7);
        printf("\n****CONTENU DE T6****\n");
        affiche1_ex1_tp2(t6,n6);
        printf("\n****CONTENU DE T7****\n");
        affiche1_ex1_tp2(t7,n7);
        presents(t6,t7,n6,n7);
        absents(t6,t7,n6,n7);
}



void exercice3_tp2()
{
    int t11[50];
    int n11;
    //printf("\n***CHARGEMENT T11*** \n");
    n11=recuperation(t11,"Tab11.txt");
    //remplir2_ex1_tp2(t11,n11);
    printf("\n*** CONTENU DE T11***\n");
    affiche_ex3_tp2(t11,n11);
    recherche1(t11,n11);
    return 0;
}

void exercice4_tp2 ()
{
    int t12[50];
    int n12;
    //printf("\n***CHARGEMENT T12*** \n");
    n12=recuperation(t12,"Tab12.txt");
    //remplir3_ex1_tp2(t12,n12);
    printf("\n*** CONTENU DE T12***\n");
    affiche1(t12,n12);
    produit_factoriel(n12);
    recherche_homogene(t12,n12);
}

void exercice2_1_tp2()
{
     int t8[50];
    int n8;
    //printf("\n***CHARGEMENT T8*** \n");
    n8=recuperation(t8,"Tab8.txt");
    //remplir1_ex1_tp2(t8,n8);
    printf("\n*** CONTENU DE T8***\n");
    affiche1(t8,n8);
    recherche_elt_sup(t8,n8);
}
void exercice2_2_tp2()
{
     int t8[50];
    int n8;
    //printf("\n***CHARGEMENT T8*** \n");
    n8=recuperation(t8,"Tab18.txt");
    //remplir1_ex1_tp2(t8,n8);
    printf("\n*** CONTENU DE T8***\n");
    affiche1(t8,n8);
    minimum(t8,n8);
    recherche_elt_sup(t8,n8);

}

void exercice2_3_tp2 ()
{
    int t10[50];
    int n10;
    //printf("\n***CHARGEMENT T10*** \n");
    n10=recuperation(t10,"Tab10.txt");
    //remplir1_ex1_tp2(t10,n10);
    printf("\n*** CONTENU DE T10***\n");
    affiche1(t10,n10);
    plus_long_plateau(t10,n10);
}


#endif // TP2_H_INCLUDED
