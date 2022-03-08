#include <iostream>
#include <fstream>
using namespace std;


ifstream f("hambar.in");
ofstream g("hambar.out");

int M, N;
int x[1001], y[1001];

int FaraCopac(int x0, int x1, int y0, int y1, int start)
{
    int i;
    for (i = start; i <= M; i++)
        if (x0 <= x[i] && x[i] <= x1)
            if (y0 <= y[i] && y[i] <= y1)
                return i;
    return 0;

}
int CalculArie(int x0, int x1, int y0, int y1)
{
    int l = x1 - x0 + 1;
    int h = y1 - y0 + 1;

    return l * h;
}

void ArieMaxima(int x0, int x1, int y0, int y1, int& ArieMax,int start)
{

    int k, Arie;
    k = FaraCopac(x0, x1, y0, y1,start);

    if (k == 0) {
        Arie = CalculArie(x0, x1, y0, y1);
        if (Arie > ArieMax)
            ArieMax = Arie;
    }
    else {
        ArieMaxima(x0, x1, y0, y[k] - 1, ArieMax,k+1); ///Dreptunghi sus
        ArieMaxima(x0, x1, y[k] + 1, y1, ArieMax,k+1); ///Dreptunghi jos
        ArieMaxima(x0, x[k] - 1, y0, y1, ArieMax,k+1); ///Dreptunghi st
        ArieMaxima(x[k] + 1, x1, y0, y1, ArieMax,k+1); ///Dreptunghi dr
    }

}

int main()
{   ///citire dimensiune matrice
    f >> N;
    ///citire nr Pomi
    f >> M;

    ///citire coordonate Pomi
    int i;
    for (i = 1; i <= M; i++)
        f >> x[i] >> y[i];


    f.close();

    int ArieMax = -1;

    int x0 = 1, x1 = N, y0 = 1, y1 = N;

    ArieMaxima(x0, x1, y0, y1, ArieMax,1);

    g << ArieMax;


    return 0;
}
