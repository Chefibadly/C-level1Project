#ifndef FICHIERS_H_INCLUDED
#define FICHIERS_H_INCLUDED

 /****Fonction enregistrement****/
void enregistrement(int t[],int n,char * nomFichier)
{
    int i;
    FILE *fp;
    fp=fopen(nomFichier,"w");
    fprintf(fp,"%d\n",n); // sauvegarder la taille de tablau
    for(i=0;i<n;i++)
    {
        fprintf(fp,"%d ",t[i]);
    }
    fclose(fp);
    printf ("\nEnregistrement du tableau dans le fichier %s \n",nomFichier);
}

 /****Fonction recuperation****/
int recuperation (int t[], char *nomFichier)
{
    int nbElement=0 ,i;
    FILE *fp;
    int x;
    fp=fopen(nomFichier,"r");
    if(fp!=NULL)
    {

        fscanf(fp,"%d\n",&nbElement);
        if(nbElement)
        {
            for(i=1;i<=nbElement;i++)
            {
                fscanf(fp,"%d",&x);
                t[i-1]=x;
            }
        }
    }
    else
        printf("\n Fichier vide \n");
    return nbElement;
}
void readFile(char name[])
{
    FILE *fp;
    char c;
    fp = fopen(name,"r");
    do {
         c = getc(fp);
         putchar(c);
    }
    while(c != EOF);
    fclose(fp);
}

#endif // FICHIERS_H_INCLUDED
