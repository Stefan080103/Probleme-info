#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstring>
#define tip char
using namespace std;
char expression_brace[100], expres[250];
int L;
struct nod {
    tip info;
    nod * urm;
};
struct stiva {
    nod* varf;
    int nrElemente;
};
bool esteVida(stiva S)
{
    return S.nrElemente==0;
}
void initializeaza(stiva& S)
{
    S.varf=NULL; S.nrElemente=0;
}
tip pop(stiva &S)
{
    if (!esteVida(S))
    {
        tip element;
        nod* varf_nou;
        element=S.varf->info;
        varf_nou=S.varf->urm;
        delete S.varf;
        S.varf=varf_nou;
        S.nrElemente--;
        return element;
    }
    else return 0;
}

void push(stiva &S, tip element)
{
    nod * nod_nou;
    if (esteVida(S))
    {
        S.nrElemente=1;
        S.varf=new nod;
        S.varf->info=element;
        S.varf->urm=NULL;
    }
    else
    {
        S.nrElemente++;
        nod_nou = new nod;
        nod_nou->info=element;
        nod_nou->urm=S.varf;
        S.varf=nod_nou;
    }
}
int  Equal( char character_1,char character_2){
    if(character_1=='(' && character_2==')' )
        return 1;
    return 0;
}
int isBalanced(){
    stiva S;
    initializeaza(S);
    char c,C; int i;
    for(i=0;i<L;i++){
        c=expression_brace[i];
        if(c=='(')
            push(S,c);
        if(c==')'){
            if(esteVida(S)) return 0;
            C=S.varf->info;
            pop(S);
            if(!Equal(C,c)) return 0;
        }
    }
    return esteVida(S);
}
void brace(){
    int l=strlen(expres);
    int i;
    for(i=0;i<l;i++)
        if(expres[i]=='(' || expres[i]==')')
            expression_brace[L++]=expres[i];
    L--;
}
int verificare(){
    int l=strlen(expres);
    int i;
    for(i=1;i<l-1;i++)
        if(expres[i]=='(' && (expres[i+1]==')' || expres[i+1]==',' || expres[i-1]==','))
            return 0;
    return 1;
}
int main()
{
    cin.getline(expres,250);
    brace();
    if(isBalanced()==1)
        if(verificare()==1)
            cout<<"paranteze corecte";
        else cout<<"incorect";
    else cout<<"incorect";
}
