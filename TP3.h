#ifndef TP3_H_INCLUDED
#define TP3_H_INCLUDED

void exercice1_1_tp3()
{int n13;
    int t13[50];
    n13=recuperation(t13,"Tab13.txt");
    //printf("\n  *-*-*-*-*  REMPLIR*-*LES_TABLEAUX*-*SVP  *-*-*-*-*  \n");
    //remplir1_ex1_tp2(t13,n13);
    printf("\n  *-*-*-*-*  TABLEAU AVANT LE TRI   *-*-*-*-*  \n");
    affiche1_ex1_tp2(t13,n13);
    printf("\n  *-*-*-*-*  TABLEAU APRES LE TRI  *-*-*-*-*  \n");
    tri_selection(t13,n13);
    affiche1_ex1_tp2(t13,n13);
}
void exercice1_2_tp3()
{
    int n14;
    int t14[50];
    n14=recuperation(t14,"Tab14.txt");
    //printf("\n  *-*-*-*-*  REMPLIR*-*LES_TABLEAUX*-*SVP  *-*-*-*-*  \n");
    //remplir1_ex1_tp2(t14,n14);
    printf("\n  *-*-*-*-*  TABLEAU AVANT LE TRI   *-*-*-*-*  \n");
    affiche1_ex1_tp2(t14,n14);
    printf("\n  *-*-*-*-*  TABLEAU APRES LE TRI  *-*-*-*-*  \n");
    tri_a_bulle(t14,n14);
    affiche1_ex1_tp2(t14,n14);
    printf("\n");
}
void exercice1_3_tp3()
{
    int t15[50];
    int n15=recuperation(t15,"Tab15.txt");
    //printf("\n  *-*-*-*-*  REMPLIR*-*LES_TABLEAUX*-*SVP  *-*-*-*-*  \n");
    //remplir1_ex1_tp2(t15,n15);
    printf("\n  *-*-*-*-*  TABLEAU AVANT LE TRI   *-*-*-*-*  \n");
    affiche1_ex1_tp2(t15,n15);
    printf("\n  *-*-*-*-*  TABLEAU APRES LE TRI  *-*-*-*-*  \n");
    tri_insertion(t15,n15);
    affiche1_ex1_tp2(t15,n15);

}
void tp3_ex1_partie5()
   {
       int n=0,t17[50],n17;
    n17=recuperation(t17,"Tab17.txt");

    printf("Tri par remplacement du  T17 \n");
    printf("\n");
    printf("le tableau avant le tri: ");
    affiche1_ex1_tp2(t17,n17);
    printf("\n");
    int i,j,maxi,ind=0,B[n17];
    for (i=0;i<n17;i++){
        maxi=0;
        for (j=n17-1;j>-1;j--){

        if (maxi<=t17[j]){maxi=t17[j];ind=j;}
   }
    t17[ind]=-1;
    B[n17-i-1]=maxi;
}

    printf("\n");
    printf("Contenu du tableau apres le tri de remplacement: ");

    affiche1_ex1_tp2(t17,n17);
    printf("\n");
    printf("\nConteu du tableau B");
    affiche1_ex1_tp2(B,n17);
    printf("\n");
   }

   void tp3_ex1_partie4(){

    int n16,t16[50],k;
        printf("Tri Denombrement du  T16 \n");
        n16=recuperation(t16,"Tab16.txt");
        printf("le tableau avant le tri: ");
        affiche1_ex1_tp2(t16,n16);
        printf("\n");
        k=CHERCHEMAX(t16,n16);
    int i,j,o,c=0,e[k];
    for (i=0;i<k;i++){
         o=0;
           for(j=0;j<n16;j++)
           {
               if(t16[j]==i+1) o++;
           }
           e[i]=o;
    }

    for(i=0;i<k;i++)
    {
        for(j=0;j<e[i];j++)
        {
            t16[c]=i+1;
            c++;
        }
    }

    printf("Contenu du tableau E: ");
    printf("\n");
    //affiche1_ex1_tp2(e,k);
    printf("\n");
    printf("\nContenu du tableau T16 apres tri: ");
    printf("\n");
    affiche1_ex1_tp2(t16,n16);

}
void exercice2_1_tp3()
{

    int val;
    int t19[50];
    int n19=recuperation(t19,"Tab19.txt");
    //printf("\n  *-*-*-*-*  REMPLIR*-*LES_TABLEAUX*-*SVP  *-*-*-*-*  \n");
    //remplir1_ex1_tp2(t19,n19);
    printf("\n  *-*-*-*-*  /*-*/   *-*-*-*-*  \n");
    affiche1_ex1_tp2(t19,n19);
    printf("\n  *-*-*-*-*  /*-*/   *-*-*-*-*  \n");
    printf("donner un valeur : \n");
    scanf("%d",&val);
    if (recherche_seq(t19,n19,val)!=-1)
        printf("%d existe dans le tableau, position =%d\n",val,recherche_seq(t19,n19,val));
    else
        printf("n'esiste pas dans le tableau \n");

}
void exercice2_2_tp3()
{
    int n20;
    int val;
    int t20[50];
    n20=recuperation(t20,"Tab20.txt");
    //printf("\n  *-*-*-*-*  REMPLIR*-*LES_TABLEAUX*-*SVP  *-*-*-*-*  \n");
    //remplir1_ex1_tp2(t20,n20);
    //printf("\n  *-*-*-*-*  /*-*/   *-*-*-*-*  \n");
    tri_a_bulle(t20,n20);
    affiche1_ex1_tp2(t20,n20);
    printf("\n  *-*-*-*-*  /*-*/   *-*-*-*-*  \n");
    printf("donner un valeur : \n");
    scanf("%d",&val);
    if (recherche_dich(t20,n20,val)!=-1)
        printf("%d existe dans le tableau, position =%d\n",val,recherche_dich(t20,n20,val));
    else
        printf("n'esiste pas dans le tableau \n");

}
void tri_particulier (int t[],int n)
{
    int i_c;
    for (i_c=0;i_c<n;i_c++)
        tri_a_bulle(t,i_c);
}



#endif // TP3_H_INCLUDED
