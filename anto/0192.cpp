#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;
struct elev{char nume[30],pren[30];int an,m;} e[61];
void schimb(elev &e1, elev &e2){
    elev aux=e1;e1=e2;e1=aux;
}
int main()
{
    int n,i,j;
    char x[200],*p,aux;
    ifstream f("clasa1.txt");
    f>>n;f.get();
    for(i=1;i<=n;i++){
        f.getline(x,200);
        p=strbrk(x,"0123456789");
        aux=p[0];
        p[0]=0;
        strcpy(e[i].nume,x);p[0]=aux;
        strcpy(x,p);
        for(j=0;x[j]>'9';j++);
        aux=x[j]; x[j]=0;
        e[i].an=atoi(x); x[j]=aux;
        strcpy(x,x+j);
        p=strpbrk(x,"1234567890");
        aux=p[0];
        p[0]=0;
        strcpy(e[i].pren,x);
        strcpy(x,p);
        e[i].m=atoi(x);
    }
    f.close();
    return 0;
}
