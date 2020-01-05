#ifndef ANIMATION_H_INCLUDED
#define ANIMATION_H_INCLUDED

#include <myconio.h>
void presentation1()
{
   int x; double y;
   char text1[]=    "\n\n \t\t\t ++++++++++++++++++++++++++++ ";
   char text2[]=    "\n\n \t\t\t + Execution de l'exercice +";
   char text3[]=    "\n\n \t\t\t ++++++++++++++++++++++++++++";
    printf("\n");
    for(x=0; text1[x]!=NULL; x++)
   {
     printf("%c",text1[x]);
      for(y=0; y<=8888888; y++)
      {
      }
   }
   printf("\n");
    for(x=0; text2[x]!=NULL; x++)
   {
     printf("%c",text2[x]);
      for(y=0; y<=8888888; y++)
      {
      }
   }
   printf("\n");
    for(x=0; text3[x]!=NULL; x++)
   {
     printf("%c",text3[x]);
      for(y=0; y<=8888888; y++)
      {
      }
   }
   getch();

}
void presentation2()
{
     textcolor(11);
    gotoxy(90,24);printf("\n                                    *********************************************************\n");
    gotoxy(90,25);printf("\n                                    *                   Resultat  exercice                  *\n");
    gotoxy(90,26);printf("\n                                    *********************************************************\n");
    textcolor(10);
}



#endif // ANIMATION_H_INCLUDED
