#include <graphics.h>
#include <windows.h>
#include <iostream>
#include <limits>
using namespace std;

void fractal(int x1, int y1, int x2, int y2, int lg)
{
    if(!lg) return;
    else {
        fractal(x1 - lg/2, y1 - lg/2, x1 + lg/2, y1 + lg/2, lg/2);
        fractal(x2 - lg/2, y2 - lg/2, x2 + lg/2, y2 + lg/2, lg/2);
        fractal(x1 - lg/2, y2 - lg/2, x1 + lg/2, y2 + lg/2, lg/2);
        fractal(x2 - lg/2, y1 - lg/2, x2 + lg/2, y1 + lg/2, lg/2);
        bar3d(x1, y1, x2, y2, 0, 1);
    }
}

void process()
{
    /* Etapa de initializare */

    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 11);
    int dimx, dimy, L = -311, culoare = -2;
    int gd = DETECT, gm;

    /* Prima etapa, selectarea lungimii */

    while(-311 >= L || L >= 311) {
        cout << "=====================================================================\n";
        cout << "============================ Patratifing ============================\n";
        cout << "=====================================================================\n\n";

        cout << "Alege lungimea patratului. Trebuie sa fie cuprinsa intre -310 si 310:\n";
        while(!(cin >> L)) {
             cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(),'\n');
        }
        system("cls");
    }

    /* A doua etapa, selectarea culorii */

    cout << "=====================================================================\n";
    cout << "============================ Patratifing ============================\n";
    cout << "=====================================================================\n\n";
    cout << "Alege una din aceste culori:\n0 - Negru\n1 - Albastru\n2 - Verde\n3 - Turcoaz\n4 - Rosu\n5 - Violet\n6 - Maro\n7 - Gri Deschis\n" <<
    "8 - Gri Inchis\n9 - Albastru Deschis\n10 - Verde Deschis\n11 - Turcoaz Deschis\n12 Rosu Deschis\n13 - Violet Deschis\n14 - Galben\n15 - Alb\n";

    while(culoare < 0 || culoare > 15) {
        cout << "Introdu un numar din intervalul 0 - 15!\n\n";
        while(!(cin >> culoare)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
        }
    }
    system("cls");

    /* A treia etapa, afisarea informatiilor despre timpul de afisare */

    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 14);
    cout << "Afisarea va dura 5 secunde dupa care procesul va fi reluat de la inceput!\nHave fun! :D\n";
    for(int i=1; i<=5; i++) {
        Sleep(0.75 * 1000);
        cout << i * 20 << "%\b\b\b";
        if(i == 5) Sleep(0.25 * 1000);
    }
    system("cls");

    /* A patra etapa, afisarea propriu-zisa a patratelor */

    initgraph(&gd, &gm, "");
    dimx = getmaxx();
    dimy = getmaxy();

    setfillstyle(SOLID_FILL, culoare);
    fractal(dimx/2 - L/2, dimy/2 - L/2, dimx/2 + L/2, dimy/2 + L/2, L/2);

    Sleep(5 * 1000);
    closegraph();

    return;
}

int main()
{
    while(true) process();
    return 0;
}
