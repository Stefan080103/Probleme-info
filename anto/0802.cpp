#include <math.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#define infinit INT_MAX
#define epsi 0.0001
#define  MAX 100
#define MAX1 20
#include <stdio.h>

int top1,top2; // varfurile celor doua stive
const int max_stiva=100;

double Opd[max_stiva]; // stiva operanzilor
char Op[max_stiva]; // stiva operatorilor

char OperatiiBinare[200]="+-*/^<>=#";
char OperatiiUnare[200]="scarel";
char Operatii[200]="+-*/^<>=#scarel";

int Prioritate(char c)  // prioritate operatorilor
{
    if(c=='(' || c==')')
        return 0;
    if(c=='+' || c=='-')
        return 1;
    if(c=='*' || c=='/')
        return 2;
    if(c=='^')
        return 3;
    if(c=='=' || c=='#' || c=='<' || c=='>')
        return 4;
    if(c=='c' || c=='s' || c=='l' || c=='e' || c=='t' || c=='a' || c=='r')
        return 5;
}

const float pi=3.1415926; // se da sub forma literei q

bool DifInf(float x)
{
    return fabs(infinit-fabs(x)) > infinit / 2.0;
}

float Logaritm(float x)
{
    if (x>epsi && DifInf(x))
        return log(x);
    else
        return infinit;
}

float Exponential(float x)
{
    if (DifInf(x)) return exp(x);
    else return infinit;
}

float Inmultit(float x, float y)
{
    if (fabs(x < epsi) || fabs(y) < epsi) return 0;
        else if (DifInf(x) && DifInf(y)) return x*y;
            else return infinit;
}

float Putere(float x, float y)
{
    // float p;
    if (x==0) return 0;
    else if (y==0) return 1;
    else if (x==infinit || y==infinit) return infinit;
    else
        return pow(x,y);
}

float Egal(float x, float y)
{
    return x==y;
}

float Diferit(float x, float y)
{
    return x!=y;
}

float MaiMic(float x, float y)
{
    return x < y;
}

bool MaiMare(float x, float y)
{
    return x > y;
}

float Plus(float x, float y)
{
    if (DifInf(x) && DifInf(y))  return x+y;
    else return infinit;
}

float Minus(float x, float y)
{
    if (DifInf(x) && DifInf(y))  return x-y;
    else return infinit;
}

float Impartit(float x, float y)
{
    if (fabs(y)>epsi) return x/y;
    else return infinit;
}

float Sinus(float x)
{
    if (DifInf(x))  return sin(x);
    else return infinit;
}

float Cosinus(float x)
{
    if (DifInf(x))  return cos(x);
    else return infinit;
}

float Modul(float x)
{
    if (DifInf(x)) return fabs(x);
    else return infinit;
}

float Radical(float x)
{
    if (DifInf(x) && (x>epsi)) return sqrt(x);
    else return infinit;
}

bool EsteNumar(char sir[MAX1])
{
    return (atof(sir)!=0.0 &&
            strchr("0123456789",sir[0]));
}

struct functie
{
    char expresie[300];
    char vect[MAX+1][MAX1];
    // vectorul cuprinzand “cuvintele”ce formeaza expresia}
    int lung; // lungimea efectiva a vectorului
    float a,b; // intervalul de evaluare a functiei
    int n; //numarul de puncte de evaluare
};

void depanare()
{
    printf("Stiva operanzilor: ");
    for (int i=1; i<=top1; i++)
        printf("%f,",Opd[i]);
    printf("\nStiva operatorilor: ");
    for (int i=1; i<=top2; i++)
        printf("%c,",Op[i]);
    printf("\n");
}




int main()
{

}
