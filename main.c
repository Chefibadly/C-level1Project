#if defined(UNICODE) && !defined(_UNICODE)
    #define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
    #define UNICODE
#endif
#include <tchar.h>
#include <myconio.h>
#include <stdio.h>
#include <windows.h>
#include "TP2.h"
#include "fichiers.h"
#include "entree_sortie.h"
#include "remplissage_tab.h"
#include "TP1.h"
#include "TP3.h"
#include "jeux.h"


/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);
void addmenus(HWND);
void CreateBtt(HWND hwnd) ;

HWND hname ,hage,hout,hogo,Add,Finnish;
 HDC hdc;
HMENU hmenu ;

HBITMAP hlogoImage , hgenerateImage;
int intro=1 ;
char ch[30] ;
long p ;
/*  Make the class name into a global variable  */
TCHAR szClassName[ ] = _T("my project");

int WINAPI WinMain (HINSTANCE hThisInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpszArgument,
                     int nCmdShow)
{
    HWND hwnd;               /* This is the handle for our window */
    MSG messages;            /* Here messages to the application are saved */
    WNDCLASSEX wincl;        /* Data structure for the windowclass */

    /* The Window structure */
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = szClassName;
    wincl.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
    wincl.style = CS_DBLCLKS;                 /* Catch double-clicks */
    wincl.cbSize = sizeof (WNDCLASSEX);

    /* Use default icon and mouse-pointer */
    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);
    wincl.lpszMenuName = NULL;                 /* No menu */
    wincl.cbClsExtra = 0;                      /* No extra bytes after the window class */
    wincl.cbWndExtra = 0;                      /* structure or the window instance */
    /* Use Windows's default colour as the background of the window */
    wincl.hbrBackground = (HBRUSH) COLOR_BACKGROUND+7;


    /* Register the window class, and if it fails quit the program */
    if (!RegisterClassEx (&wincl))
        return 0;

    /* The class is registered, let's create the program*/
    hwnd = CreateWindowEx (
           0,                   /* Extended possibilites for variation */
           szClassName,         /* Classname */
           _T("my project"),       /* Title Text */
           WS_OVERLAPPEDWINDOW, /* default window */
           CW_USEDEFAULT,       /* Windows decides the position */
           CW_USEDEFAULT,       /* where the window ends up on the screen */
           1366,                 /* The programs width */
           768,                 /* and height in pixels */
           HWND_DESKTOP,        /* The window is a child-window to desktop */
           NULL,                /* No menu */
           hThisInstance,       /* Program Instance handler */
           NULL                 /* No Window Creation data */
           );

    /* Make the window visible on the screen */
    ShowWindow (hwnd, nCmdShow);

    /* Run the message loop. It will run until GetMessage() returns 0 */
    while (GetMessage (&messages, NULL, 0, 0))
    {
        /* Translate virtual-key messages into character messages */
        TranslateMessage(&messages);
        /* Send message to WindowProcedure */
        DispatchMessage(&messages);
    }

    /* The program return-value is 0 - The value that PostQuitMessage() gave */
    return messages.wParam;
}


/*  This function is called by the Windows function DispatchMessage()  */

LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{static HBITMAP  hBmp;
    int n;
    int t[50];
   /* if(intro)
    {
        system("start test.exe") ;
        intro=0;
    }*/

    switch (message)                  /* handle the messages */
    {

        case WM_COMMAND:
        switch(wParam)
        {
            /****************TP1*****************/
        case 1:
                system("color F2");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("/*-*/*-*/*-*/*-*/ EXERCICE_1 /*-*/*-*/*-*/*-*/ \n");
                exercice1_tp1();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 2:
                system("color F2");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("/*-*/*-*/*-*/*-*/ EXERCICE_2 /*-*/*-*/*-*/*-*/ \n");
                exercice2_tp1 ();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 3:
                system("color F2");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    /*-*/*-*/*-*/*-*/ EXERCICE_3 /*-*/*-*/*-*/*-*/   \n");
                exercice3_tp1 ();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 4:
                system("color F2");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    /*-*/*-*/*-*/*-*/ EXERCICE_4 /*-*/*-*/*-*/*-*/  \n");
                exercice4_tp1();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 5:
                system("color F2");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    /*-*/*-*/*-*/*-*/ EXERCICE_5 /*-*/*-*/*-*/*-*/  \n");
                exercice5_tp1();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 6:
                system("color F2");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    /*-*/*-*/*-*/*-*/ EXERCICE_6 /*-*/*-*/*-*/*-*/   \n");
                exercice6_tp1();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

                           /***************TP2***************/
        case 7:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab1();//remplissage1(t1,n1,file,"tab1.txt","01");
                printf("    /*-*/*-*/*-*/*-*/ REMPLIR_T1 /*-*/*-*/*-*/*-*/   \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 8:

                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab2();//remplissage1(t1,n1,file,"tab2.txt","02");
                //printf("    /*-*/*-*/*-*/*-*/ REMPLIR_T2 /*-*/*-*/*-*/*-*/   \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 9:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab3();//printf(" /*-*/*-*/*-*/*-*/  REMPLIR_T3  /*-*/*-*/*-*/*-*/ \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 10:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab4();//printf(" /*-*/*-*/*-*/*-*/  REMPLIR_T4  /*-*/*-*/*-*/*-*/ \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 11:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab5();//printf(" /*-*/*-*/*-*/*-*/  REMPLIR_T5  /*-*/*-*/*-*/*-*/ \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 12:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab6();//printf(" /*-*/*-*/*-*/*-*/  REMPLIR_T6 /*-*/*-*/*-*/*-*/ \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 13:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab7();//printf(" /*-*/*-*/*-*/*-*/  REMPLIR_T7  /*-*/*-*/*-*/*-*/ \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 14:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab8();//printf(" /*-*/*-*/*-*/*-*/  REMPLIR_T8  /*-*/*-*/*-*/*-*/ \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 15:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab9();//printf(" /*-*/*-*/*-*/*-*/  REMPLIR_T9  /*-*/*-*/*-*/*-*/ \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 16:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab10();//printf(" /*-*/*-*/*-*/*-*/  REMPLIR_T10  /*-*/*-*/*-*/*-*/ \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 17:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab11();//printf(" /*-*/*-*/*-*/*-*/  REMPLIR_T11  /*-*/*-*/*-*/*-*/ \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 18:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab12();//printf(" /*-*/*-*/*-*/*-*/  REMPLIR_T12  /*-*/*-*/*-*/*-*/ \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 19:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                //exercice1_q1_tp2();
                printf(" /*-*/*-*/*-*/*-*/  EXERCICE_1-1  /*-*/*-*/*-*/*-*/ \n");
                exercice1_1_tp2 ();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 20:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  EXERCICE_1-2  /*-*/*-*/*-*/*-*/ \n");
                exercice1_2_tp2 ();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 21:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  EXERCICE_1-3  /*-*/*-*/*-*/*-*/ \n");
                exercice1_3_tp2 ();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 22:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  EXERCICE_1-4  /*-*/*-*/*-*/*-*/ \n");
                exercice1_4_tp2 ();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 23:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  EXERCICE_1-5  /*-*/*-*/*-*/*-*/ \n");
                exercice1_5_tp2 ();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 24:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  EXERCICE_1-6  /*-*/*-*/*-*/*-*/ \n");
                exercice1_6_tp2 ();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break ;

        case 25:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  EXERCICE_2-1  /*-*/*-*/*-*/*-*/ \n");
                exercice2_1_tp2();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 26:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  EXERCICE_2-2  /*-*/*-*/*-*/*-*/ \n");
                exercice2_2_tp2();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 27:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  EXERCICE_2-3  /*-*/*-*/*-*/*-*/ \n");
                exercice2_3_tp2 ();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 28:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  EXERCICE_3  /*-*/*-*/*-*/*-*/ \n");
                exercice3_tp2();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 29:
                system("color F3");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  EXERCICE_4  /*-*/*-*/*-*/*-*/ \n");
                exercice4_tp2 ();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

                        /****************TP3*****************/

        case 30:
                system("color F4");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab13();//printf(" /*-*/*-*/*-*/*-*/  REMPLIR_T13  /*-*/*-*/*-*/*-*/ \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 31:
                system("color F4");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab14();//printf(" /*-*/*-*/*-*/*-*/  REMPLIR_T14  /*-*/*-*/*-*/*-*/ \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 32:
                system("color F4");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab15();//printf(" /*-*/*-*/*-*/*-*/  REMPLIR_T15  /*-*/*-*/*-*/*-*/ \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 33:
                system("color F4");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab16();//printf(" /*-*/*-*/*-*/*-*/  REMPLIR_T16  /*-*/*-*/*-*/*-*/ \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 34:
                system("color F4");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab17();//printf(" /*-*/*-*/*-*/*-*/  REMPLIR_T17  /*-*/*-*/*-*/*-*/ \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 35:
                system("color F4");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab18();//printf(" /*-*/*-*/*-*/*-*/  REMPLIR_T18 /*-*/*-*/*-*/*-*/  \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 36:
                system("color F4");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab19();//printf(" /*-*/*-*/*-*/*-*/  REMPLIR_T19  /*-*/*-*/*-*/*-*/ \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 37:
                system("color F4");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                Tab20();//printf(" /*-*/*-*/*-*/*-*/  REMPLIR_T20  /*-*/*-*/*-*/*-*/ \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 38:
                system("color F4");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  EXERCICE_1_1  /*-*/*-*/*-*/*-*/ \n");
                exercice1_1_tp3();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 39:
                system("color F4");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  EXERCICE_1_2  /*-*/*-*/*-*/*-*/ \n");
                exercice1_2_tp3();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 66:
                system("color F4");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  EXERCICE_1_3  /*-*/*-*/*-*/*-*/ \n");
                exercice1_3_tp3();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 67:
                system("color F4");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  EXERCICE_2_1  /*-*/*-*/*-*/*-*/ \n");
                tp3_ex1_partie4();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 68:
                system("color F4");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  EXERCICE_2_2  /*-*/*-*/*-*/*-*/ \n");
                tp3_ex1_partie5();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 69:
                system("color F4");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  EXERCICE_2_2  /*-*/*-*/*-*/*-*/ \n");
                exercice2_1_tp3();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 70:
                system("color F4");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  EXERCICE_2_2  /*-*/*-*/*-*/*-*/ \n");
                exercice2_2_tp3();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;



                /****************les_TABLEAUX*****************/

            case 40:

                system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB1  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab1.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
            case 41:
                system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB2  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab2.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
            case 42:
                system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB3  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab3.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
            case 43:
                system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB4  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab4.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
            case 44:
                system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB5  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab5.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
            case 45:
                system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB6  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab6.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
            case 46:
                system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB7  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab7.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
            case 47:
                system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB8  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab8.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
            case 48:
                system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB9  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab9.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
            case 49:
                 system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB10  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab10.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
            case 50:
                 system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB11  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab11.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
            case 51:
                system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB12  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab12.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
            case 52:
                system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB13  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab13.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
            case 53:
                system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB14  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab14.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
            case 54:
                system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB15  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab15.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
            case 55:
                system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB16  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab16.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
            case 56:
                system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB17  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab17.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
            case 57:
                system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB18  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab18.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
            case 58:
                system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB19  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab19.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
            case 59:
                system("color 00");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  TAB20  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","Tab20.txt",NULL,NULL,SW_SHOWNORMAL);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
                /***************PDF****************/

        case 60:
                system("color FD");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  PDF_TP1 /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","TP1.pdf",NULL,NULL,SW_SHOWNORMAL);
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 61:
                system("color FD");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  PDF_TP2  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","TP2.pdf",NULL,NULL,SW_SHOWNORMAL);
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 62:
                system("color FD");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf(" /*-*/*-*/*-*/*-*/  PDF_TP3  /*-*/*-*/*-*/*-*/ \n");
                ShellExecute(NULL,"open","TP3.pdf",NULL,NULL,SW_SHOWNORMAL);
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 63:
                system("color FD");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                ShellExecute(NULL,"open","GettingOverIt",NULL,NULL,SW_SHOWNORMAL);//printf(" /*-*/*-*/*-*/*-*/  Game /*-*/*-*/*-*/*-*/ \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 72:
                system("color FD");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                tictactoe();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 73:
                system("color FD");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                n=recuperation(t,"Tab18.txt");
                affiche1_ex1_tp2(t,n);
                tri_particulier(t,n);
                printf("\n  *-*-*-*-*  /*-*/   *-*-*-*-*  \n");
                affiche1_ex1_tp2(t,n);
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 71:
                if (MessageBox(hwnd," Vous voulez quitter ?", "QUITTER", MB_YESNO | MB_ICONQUESTION ) == IDYES)
                {

                    DestroyWindow(hwnd);
                    system("cls");


        }
        }

    case WM_CREATE :
        addmenus(hwnd);
//         CreateBtt(hwnd) ;
            /*****************ajouter fond ********************/
           hBmp=LoadImage(NULL,"med chedly et mahdi.bmp",IMAGE_BITMAP,1370,700,LR_LOADFROMFILE);

            break;

        case WM_PAINT :
            {



         PAINTSTRUCT ps;
            hdc = BeginPaint(hwnd, &ps);



            DrawState(hdc,NULL,NULL,(long)hBmp,0,0,0,0,0,DST_BITMAP);

            EndPaint(hwnd, &ps);}
        break;
        case WM_DESTROY:
            PostQuitMessage (0);        /* send a WM_QUIT to the message queue */
            break;
        default:                      /* for messages that we don't deal with */
            return DefWindowProc (hwnd, message, wParam, lParam);
    }

    return 0;
}
void addmenus(HWND hwnd)
{
    hmenu=CreateMenu();
    HMENU htp=CreateMenu();
    HMENU htp1=CreateMenu();
    //HMENU htp2=CreateMenu();
    HMENU htp3=CreateMenu();
    HMENU htp4=CreateMenu();
    HMENU htp5=CreateMenu();
    HMENU hex3=CreateMenu();
    HMENU hex2=CreateMenu();
    HMENU hex4=CreateMenu();
    HMENU hex5=CreateMenu();
    HMENU hex6=CreateMenu();
    HMENU hex1=CreateMenu();
    HMENU hex7=CreateMenu();
    HMENU hex8=CreateMenu();
    HMENU hex9=CreateMenu();






    //AppendMenu(hmenu,MF_STRING,0,"cr�ation du repertoire");
    AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp,"TP1");

    AppendMenu(htp,MF_STRING,1,"EXERCICE 1");
    AppendMenu(htp,MF_STRING,2,"EXERCICE 2");
    AppendMenu(htp,MF_STRING,3,"EXERCICE 3");
    AppendMenu(htp,MF_STRING,4,"EXERCICE 4");
    AppendMenu(htp,MF_STRING,5,"EXERCICE 5");
    AppendMenu(htp,MF_STRING,6,"EXERCICE 6");


    AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp1,"TP2");

      AppendMenu(htp1,MF_POPUP,(UINT_PTR)hex4,"REMPLISSAGE");
           AppendMenu(hex4,MF_STRING,7,"T1");
           AppendMenu(hex4,MF_STRING,8,"T2");
           AppendMenu(hex4,MF_STRING,9,"T3");
           AppendMenu(hex4,MF_STRING,10,"T4");
           AppendMenu(hex4,MF_STRING,11,"T5");
           AppendMenu(hex4,MF_STRING,12,"T6");
           AppendMenu(hex4,MF_STRING,13,"T7");
           AppendMenu(hex4,MF_STRING,14,"T8");
           AppendMenu(hex4,MF_STRING,15,"T9");
           AppendMenu(hex4,MF_STRING,16,"T10");
           AppendMenu(hex4,MF_STRING,17,"T11");
           AppendMenu(hex4,MF_STRING,18,"T12");

      AppendMenu(htp1,MF_POPUP,(UINT_PTR)hex6,"EXERCICE 1");
           AppendMenu(hex6,MF_STRING,19,"TRANSFERT");
           AppendMenu(hex6,MF_STRING,20,"SYMETRIQUES");
           AppendMenu(hex6,MF_STRING,21,"INVERSE");
           AppendMenu(hex6,MF_STRING,22,"SAISIE_k");
           AppendMenu(hex6,MF_STRING,23,"INSERTION");
           AppendMenu(hex6,MF_STRING,24,"TEST");
      AppendMenu(htp1,MF_POPUP,(UINT_PTR)hex7,"EXERCICE 2");
          AppendMenu(hex7,MF_STRING,25,"PARTIE 1");
          AppendMenu(hex7,MF_STRING,26,"PARTIE 2");
          AppendMenu(hex7,MF_STRING,27,"PARTIE 3");
      AppendMenu(htp1,MF_STRING,28,"EXERCICE 3");
      AppendMenu(htp1,MF_STRING,29,"EXERCICE 4");

    AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp3,"TP3");

    AppendMenu(htp3,MF_POPUP,(UINT_PTR)hex1,"REMPLISSAGE");
           AppendMenu(hex1,MF_STRING,30,"T13");
           AppendMenu(hex1,MF_STRING,31,"T14");
           AppendMenu(hex1,MF_STRING,32,"T15");
           AppendMenu(hex1,MF_STRING,33,"T16");
           AppendMenu(hex1,MF_STRING,34,"T17");
           AppendMenu(hex1,MF_STRING,35,"T18");
           AppendMenu(hex1,MF_STRING,36,"T19");
           AppendMenu(hex1,MF_STRING,37,"T20");

      AppendMenu(htp3,MF_POPUP,(UINT_PTR)hex8,"EXERCICE 1");
          AppendMenu(hex8,MF_STRING,38,"TRI_SELECTION");
          AppendMenu(hex8,MF_STRING,39,"TRI_A_BULLE");
          AppendMenu(hex8,MF_STRING,66,"TRI_INSERTION");
          AppendMenu(hex8,MF_STRING,67,"TRI_DENOMBREMENT");
          AppendMenu(hex8,MF_STRING,68,"TRI-1");
          AppendMenu(hex8,MF_STRING,73,"TRI PARTICULIER");
      AppendMenu(htp3,MF_POPUP,(UINT_PTR)hex9,"EXERCICE 2");
          AppendMenu(hex9,MF_STRING,69,"RECHERCHE_SEQUENTIELLE");
          AppendMenu(hex9,MF_STRING,70,"RECHERCHE_DICHTOMIQUE");




      AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp4,"Contenue des Tableaux");
           AppendMenu(htp4,MF_STRING,40,"T1");
           AppendMenu(htp4,MF_STRING,41,"T2");
           AppendMenu(htp4,MF_STRING,42,"T3");
           AppendMenu(htp4,MF_STRING,43,"T4");
           AppendMenu(htp4,MF_STRING,44,"T5");
           AppendMenu(htp4,MF_STRING,45,"T6");
           AppendMenu(htp4,MF_STRING,46,"T7");
           AppendMenu(htp4,MF_STRING,47,"T8");
           AppendMenu(htp4,MF_STRING,48,"T9");
           AppendMenu(htp4,MF_STRING,49,"T10");
           AppendMenu(htp4,MF_STRING,50,"T11");
           AppendMenu(htp4,MF_STRING,51,"T12");
           AppendMenu(htp4,MF_STRING,52,"T13");
           AppendMenu(htp4,MF_STRING,53,"T14");
           AppendMenu(htp4,MF_STRING,54,"T15");
           AppendMenu(htp4,MF_STRING,55,"T16");
           AppendMenu(htp4,MF_STRING,56,"T17");
           AppendMenu(htp4,MF_STRING,57,"T18");
           AppendMenu(htp4,MF_STRING,58,"T19");
           AppendMenu(htp4,MF_STRING,59,"T20");

      AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp5,"PDF");
           AppendMenu(htp5,MF_STRING,60,"TP1");
           AppendMenu(htp5,MF_STRING,61,"TP2");
           AppendMenu(htp5,MF_STRING,62,"TP3");

      AppendMenu(hmenu,MF_POPUP,(UINT_PTR)hex2,"Jeux");
           AppendMenu(hex2,MF_STRING,63,"GettingOverIt");
           AppendMenu(hex2,MF_STRING,72,"tictactoe");



      AppendMenu(hmenu,MF_STRING,71,"Quitter");
          SetMenu(hwnd,hmenu);
}

