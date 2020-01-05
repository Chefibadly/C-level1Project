#ifndef ENTREE_SORTIE_H_INCLUDED
#define ENTREE_SORTIE_H_INCLUDED


                         /**--**--**--**TP1**--**--**--**/

                        /*****FONCTION SAISIE EX1 TP1 *******/

long int saisie1_tp1 ()
{
    long N,x;
    do
    {
        printf("donner un entier : ");
        scanf("%ld",&N);
    }while(!(N>0));
    //scanf("%ld",&x);
    //printf("%ld=%ld\n",N,x);
    return N;
}
                        /*****FONCTION INVERSION EX1 TP1 *******/
long int inversion_tp1 (long int x)
{
    long int ninv=0;
    while(x!=0)
    {
        ninv=ninv*10;
        ninv=ninv+x%10;
        x=x/10;
    }
    return ninv ;
}
                           /*****FONCTION AFFICHE EX1 TP1 *******/
void affiche1_tp1 (long int n )
{
    long int x , ni ;
    x=n*(n%10);
    ni=inversion_tp1(n);
    if(x==ni && n==ni)
        printf("%ld est symetrique et propre \n",n);
    else
        if (x==ni)
            printf("%ld est propre \n ",n);
        else
            if(n==ni)
                printf("%ld est symetrique \n ",n);
            else
                printf("%ld ni propre ni symetrique \n",n);
}
                        /*****FONCTION SAISIE EX2 TP1 *******/
int saisie2_tp1 ()
{
    long x;
    do
    {
        printf("donner un entier :");
        scanf("%d",&x);
    }
    while (!(x>1));
    return x;
}
                       /*****FONCTION PREMIER EX2 TP1 *******/
int premier_tp1 (int x)
{
    int i,ok=1;
    for(i=2;i<=x/2;i++)
        if(x%i==0)
        {
            ok=0;
            break;
        }
        return ok;
}
                       /*****FONCTION AFFICHE PREMIER EX2 TP1 *******/
void affiche_premier_tp1 (int n)
{
    int i;
    printf("les nombres premiers infeieurs a %d sont : \n",n);
    for(i=2;i<=n;i++)
        if(premier_tp1(i)==1)
           printf("%d \t",i);
}
                      /*****FONCTION SAISIE EX3 TP1 *******/
long int saisie3_tp1()
{
    long nb ;
    do
    {
        printf("donnder un entier :");
        scanf("%ld",&nb);
    }while (!(nb>1));
}
                      /*****FONCTION TOT IMPAIR EX3 TP1 *******/
int tot_impair(long nb)
{
    int p=1 ,b=1;
    while(nb)
    {
        if(((nb%10)%2==0 && p%2==1)||((nb%10)%2==1 && p%2==0))
        {
            b=0;
            break;
        }
        p++;
        nb=nb/10;
    }
    return b;
}
                       /*****FONCTION AFFICHE EX3 TP1 *******/
void affiche3_tp1(long nb )
{
    if(tot_impair(nb))
        printf("\n %d est totalement impair \n ",nb);
    else
        printf("\n %d n'est pas totalement impair \n ",nb);
}
                         /*****FONCTION SAISIE EX4 TP1 *******/
int saisie4_tp1 ()
{
    int n ;
    do
    {
        printf("donner n (n>1)");
        scanf("%d",&n);
    }while (!(n>1));
    return n;
}
                          /*****FONCTION FACTEURS PREMIERS EX4 TP1 *******/
void facteurs_premiers(int n)
{
    int i=2 , cp=1 ;
    printf("%d",n);
    do
    {
        if(n%i==0)
        {
            if(cp==1)
                printf(" = %d ",i);
            else
                printf(" * %d ",i);
            cp++;
            n=n/i ;
        }
        else
            i++;
    }while(n!=1);
}
                      /*****FONCTION SAISIE EX5 TP1 *******/
long int saisie5_tp1()
{
    long n ;
    do
    {
        printf("donner un entier :");
        scanf("%ld",&n);
    }while(n<=0);
    return n;
}
                       /*****FONCTION CARRE EX5 TP1 *******/
long int carre(long n )
{
    int i,j ;
    long s;
    for(i=1,s=0,j=1;i<=n;i++)
    {
        s+=j;
        j=j+2;
    }
    return s;
}
                           /*****FONCTION SOMME DIVISIEUR EX5 TP1 *******/
long somme_diviseur(long n )
{
    int i ;
    long sd;
    for(i=1,sd=0;i<=n;i++)
        if(n%i==0)
           sd+=i;
    return sd;
}
                          /*****FONCTION DIVISIBLE EX5 TP1 *******/
int divisible_13(long n)
{
    int u,ok=0;
    long d;
    do
    {
        u=n%10;
        d=n/10;
        n=d+4*u;
        if(n==13 || n==26 || n==39)
        {
            ok=1;
            break ;
        }
    }while(d>=10);
    return ok ;
}
                     /*****FONCTION SAISIE EX6 TP1 *******/
long int saisie_ex6_tp1 ()
{
    long  n ;
    do
    {
        printf("donner n (n>1)");
        scanf("%ld",&n);
    }while (!(n>1));
    return n;
}
                        /***** FONCTION PREMIER EX6 TP1 *****/
int premier (long int x)
{
    int i,ok=1;
    for(i=2;i<=x/2;i++)
        if(x%i==0)
    {
        ok=0;
        break ;
    }
    return ok ;
}
                             /***** FONCTION INVERSER EX6 TP1*****/
long int inverser(long int x)
{
    long int ni=0;
    while(x)
    {
        ni=ni*10+x%10;
        x=x/10;
    }
    return ni ;
}
                          /***** FONCTION SUPER PREMIER EX6 TP1*****/
int super_premier (long int x)
{
    int ok=1;
    while(x)
    {
        if(premier(x)==0)
        {
            ok=0;
            break;
        }
        x=x/10;
    }
    return ok ;
}
                        /***** FONCTION AFFICHE EX6 TP1 *****/
void affiche(long int x)
{
    long int y=inverser(x);
    if(premier(x))
    {
        if(super_premier(x)&&premier(y))
            printf(" %ld est super premier et premier dans les 2 cas \n ",x);
        else
            if(super_premier(x))
                 printf(" %ld est super premier \n",x);
        else
            if(premier(y))
                printf(" %ld est  premier dans les 2 cas \n ",x);
        else
            printf(" %ld ni  super premier et ni premier dans les 2 cas \n",x);

    }
    else
        printf(" n'est pas premier \n",x);
}


                      /**--**--**--**TP2**--**--**--**/


                    /***********TRANSFERT**************/

void transfert(int t1[] , int v1[] , int n1)
{
    int i,j,k;
    for(i=0,j=0,k=n1-1;i<n1;i++)
        if(i%2==1)
    {
        v1[k]=t1[i];
        k--;
    }
    else
    {
        v1[j]=t1[i];
        j++;
    }
}
                 /**********FONCTION SYMETRIQUES**********/
int symetriques(int t2[],int n2)
{
    int i , ok=1;
    for(i=0;i<n2/2;i++)
        if(t2[i]!=t2[n2-i-1])
    {
        ok=0;
    }
    return ok ;

}
                        /***********FONCTION INVERSE***********/
void inverse(int t3[],int n3)
{
    int i,aux;
    for(i=0;i<n3/2;i++)
       {
           aux=t3[i];
           t3[i]=t3[n3-i-1];
           t3[n3-i-1]=aux;
       }
}

                         /**********FONCTION SAISIE_k**********/
int saisie_k(int n4)
{
    int k;
    do
    {
        printf("donner k : ");
        scanf("%d",&k);
    }
    while (!(k>0 && k<n4));
    return k;
}
                          /************FONCTION ROTATION************/
void rotation(int t4[],int n4)
{
    int i,aux=t4[0];
    for(i=0;i<n4-1;i++)
        t4[i]=t4[i+1];
    t4[i+1]=aux;
}
                          /**********FONCTION K_ROTATION***********/
void k_rotation(int t4[],int n4,int k)
{
    int i;
    for(i=1;i<=k;i++)
        rotation(t4,n4);
}
                        /***********FONCTION INSERTION***********/
void insertion(int t5[],int n5)
{
    int i,pos,val;
    do
    {
    printf("donner un indice dentre 0 et %d",n5);
    scanf("%d",&pos);
    }while((pos<0)||(pos>n5));
    printf("donner une valeur     :");
    scanf("%d",&val);
    if(n5<50)
    {
        for(i=n5;i<pos;i--)
            t5[i]=t5[i-1];
        t5[i]=val;
        printf("\nContenu de t5 apres insertion\n");
        affiche1_ex1_tp2(t5,n5+1);
    }
    else
        printf("le tableau ne peut pas contenir une autre element  ");
}

                       /************FONCTION TEST*************/

int test (int t[],int n,int v)
{
    int i;
    for(i=0;i<n;i++)
        if(t[i]==v)
        return 1;
    return 0;
}

                      /************FONCTION PRESENTS*************/

void presents (int t6[],int t7[],int n6,int n7)
{
    int i ,nv2=0 ,v2[50];
    for(i=0;i<n6;i++)
        if((test(t7,n7,t6[i]))&&(!test(v2,nv2,t6[i])))
            v2[nv2++]=t6[i];
    if(nv2)
       {
          printf("\ Contenu de v2 \n");
          affiche1(v2,nv2);
       }
       else
            printf("\n Il n'existe pas de entiers communs entre t6 et t7 \n");

}

                      /************FONCTION ABSENTS*************/

void absents (int t6[],int t7[],int n6,int n7)
{
    int i,nv3=0,v3[50];
    for(i=0;i<n6;i++)
        if((!test(t7,n7,t6[i]))&&(!test(v3,nv3,t6[i])))
            v3[nv3++]=t6[i];
    if(nv3)
    {
         printf("\ Contenu de v3 \n");
          affiche1(v3,nv3);
    }
    else
            printf("\n Il n'existe pas de entiers present dans t6 mais absents dans t7  \n");

}


                 /**********FONCTION AFFICHE1 *********/

void affiche1(int t[],int n)
{
    int i ;
    for (i=0;i<n;i++)
        printf("%d |",t[i]);
    printf("\n");
}

                /********FONCTION REMPLIR1 EX2 TP2********/
void remplir1_ex1_tp2(int t[],int n)
{
    int i ;
    for(i=0;i<n;i++)
    {
        printf("%cl%cment[%d] :",130,130,i);
        scanf("%d",&t[i]);
    }
}

                /**********FONCTION REMPLIR2**********/
void remplir2_ex1_tp2(long int t[], int n)
{
    int i ;
    for (i=0;i<n;i++)
    do
    {
        printf("%cl%cment[%d] :",130,130,i);
        scanf("%ld",&t[i]);

    }while(!(t[i]>100));
}

                      /**********FONCTION REMPLIR3*********/
void remplir3_ex1_tp2(long int t[], int n)
{
     int i;
    for (i=0;i<n;i++)
        do
        {
            printf("%cl%cment[%d] : ",130,130,i);
            scanf("%ld",&t[i]);
        }while(!(t[i]>0));
}

                      /**********FONCTION AFFICHE1 EX2 TP2********/

void affiche1_ex1_tp2(long int t[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",t[i]);
    printf("\n");
}

                            /*****FONCTION SAISIE EX2 TP2*****/
int saisie_taille()
{
    int n;
    do
    {
        printf("donner la taille : ");
        scanf("%d",&n);
    }
    while (!(n>=2 && n<=50));
    return n;
}

                            /*****FONCTION MINIMUM EX2 TP2*****/

int minimum(int t[],int n )
{
    int i,min=t[0];
    for(i=1;i<n;i++)
        if(t[i]<min)
            min=t[i];
    return min ;
}
                           /*****FONCTION RECHERCHE_ELT_SUP EX2 TP2*****/
void recherche_elt_sup(int t8[],int n8)
{
    int i,a,v[50],nv=0 ;
    printf("donner a :");
    scanf("%d",&a);
    for(i=0;i<n8;i++)
        if(t8[i]>a)
    {
        v[nv]=t8[i];
        nv++;
    }
    if(nv)
    {
        printf("les element de t8 qui sont > à %d sont \n");
        affiche1(v,nv);
        printf("le plus petit des %cl%cment qui sont > %c %d=%d \n",a,minimum(v,nv));

    }
    else
        printf("il n'existe pas des entiers qui sont > %c %d dans t8 \n ",a);
}
                            /*****FONCTION COMPTER*****/
int compter ( int t[],int n ,int x)
{
    int i,cp=0;
    for(i=0;i<n;i++)
        if (t[i]==x)
        cp++;
    return cp;
}
                          /*****FONCTION RECHERCHE_FREQUENT*****/
void recherche_frequent(int t9[], int n9)
{
    int i,cp,max=0,x;
    for(i=0;i<n9;i++)
    {
        cp=compter(t9,n9,t9[i]);
        if(cp>max)
        {
            max=cp;
            x=t9[i];
        }
    }
    printf("l element le plus frequent = %d et son nnombre d'occurrence = %d\n",x,max);
}

                             /***** FONCTION PLUS LONG PLATEAU*****/

void plus_long_plateau(int t10[],int n10)
{
    int i , pos_debut , pos_fin , max=1,cp=1 ;
    for(i=1;i<n10;i++)
    {
        if(t10[i]-t10[i-1]==0)
        {
            cp++;
            if(cp>max)
            {
                max=cp;
                pos_debut=i-(cp+1);
                pos_fin=i;
            }
        }
        else
            cp=1;
    }
        if(max>1)
        {
            printf("\n Le plus long plateau d'entiers consecutif dans t10 \n");
            printf("le plus long plateau commune par %d se termine par %d et de longeur %d \n",pos_debut+1,pos_fin+1,max);
        }

        else
            printf(" il n'existe pas de seq . des entiers consecutifs et egaux dans t10 \n ");
            printf(" \n ");

    }


                         /*****FONCTION AFFICHE EX3 TP2*****/

void affiche_ex3_tp2(long int T[],int N)
{
    int i;
    for(i=0;i<N;i++)
        printf("%ld\t",T[i]);
    printf("\n");
}

                          /*****FONCTION INVERSER_ENTIER EX3 TP2*****/

long inverser_entier(long x)
{
    long xi=0;
    while (x)
    {
        xi=xi*10+x%10;
        x=x/10;
    }
    return xi ;
}

                             /*****FONCTION RECHERCHE1 EX3 TP2*****/

void recherche1(long int t[],int n)
{
    int i,cp=0;
    long xi;
    for(i=0;i<n;i++)
    {
        xi=inverser_entier(t[i]);
        if(t[i]==xi)
        {
            cp++;
            if(cp==1)
                printf("****les nombres symetriques sont **** \n ");
            printf("%d\t",t[i]);
        }
    }
    if(cp==0)
        printf("il n'existe pas des nombres symetriques de T \n");
}

                           /*****FONCTION SAISIE EX4 TP2*****/
int saisie_taille2()
{
    int n;
    do
    {
        printf("donner la taille : ");
        scanf("%d",&n);
    }
    while (!(n>=1&&n<=50&&n%2==0));
    return n;
}
                   /*******PRODUIT_FACTORIEL********/
int produit_factoriel(int x)
{
    int i=2,p=1,j=1 ;
    while(x!=1)
        if(x%i==0)
        {
            x=x/i;
            if(i!=j)
            {
                p=p*i;
                j=i;
            }

        }
        else
            i++;
    return p;
}
                           /*********RECHERCHE_HOMOGENE*********/
void recherche_homogene(int t12[],int n12)
{
    int i,cp=0;
    for(i=0;i<n12;i=i+2)
        if(produit_factoriel(t12[i]) == produit_factoriel(t12[i+1]))
    {
        cp++;
        if(cp==1)
            printf("des couples homogene de t12 sont \n");
        printf("%d et %d sont homogenes \n",t12[i],t12[i+1]);

    }
    if(cp==0)
        printf("il n'existe pas des couples homog%cne dans t12 \n");
}

                        /**--**--**--**TP3**--**--**--**/

                       /*********TRI_SELECTION*********/

void tri_selection(int t[],int n)
{
    int i,j, posmin,aux;
    for (i=0;i<n;i++)
    {
        for(posmin=i ,j=i+1 ; j<n ;j++)
            if(t[j]<t[posmin])
                posmin=j;
        if(posmin!=i)
          {
            aux=t[i];
            t[i]=t[posmin];
            t[posmin]=aux;
          }

    }
}

                        /*********TRI_A_BULLE*********/

void tri_a_bulle(int t[],int n )
{

    int i,aux , ok ;
    do
    {
        ok=0;
        for(i=0; i<n-1;i++)
            if(t[i]>t[i+1])
        {
            aux = t[i];
            t[i] = t[i+1];
            t[i+1] = aux;
            ok=1;
        }
        n--;
    }while(n && ok);
}

                         /*********TRI_INSERTION*********/

void tri_insertion(int t[], int n)
{
    int i,j,aux;
    for (i=1;i<n;i++)
    {
        aux=t[i];
        j=i;
        while(aux<t[j-1] && j>0)
        {
            t[j]=t[j-1];
            j--;
        }
        t[j]=aux;
    }
}

                           /*********RECHERCHE_SEQUENTIELLE*********/
int recherche_seq(int t[],int n, int val)
{
    int i,pos=-1;
    //printf("donner un valeur : \n");
    //scanf("%d",&val);
    for (i=0;i<n;i++)
        if (t[i]==val)
        {
            pos=i;
            break;
        }
        return pos; //printf("le valeur est existe dans la position :%d\n",pos);

}

                         /*********RECHERCHE_DICHTOMIQUE*********/
int recherche_dich(int t[],int n, int val)
{
    int pos=-1,inf=0,mil,sup=n;

    while(inf<=sup)
    {
        mil=(inf+sup)/2;
        if(t[mil]==val)
        {
            pos=mil;
            break;
        }
        else
            if(val<t[mil])
               sup=mil-1;
            else
                inf=mil+1;
    }
    return pos;
}
int CHERCHEMAX ( int tab[], int longueur)

{int i, temp = 0;

	for (i=0; i<longueur; i++)

		if (tab[i] > temp )

			temp = tab[i];

	return(temp);
}


#endif // ENTREE_SORTIE_H_INCLUDED
