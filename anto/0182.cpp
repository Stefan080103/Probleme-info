#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;
struct elev{char nu[20],pre[20];int v;float g;};
void inter(elev &e1,elev &e2){
    elev aux;
    aux=e1;
    e1=e2;
    e2=aux;
}
int main()
{
    elev e[30]; char aux[50],*p; int n=0;
    ifstream f("clasa.in");
    while(f.getline(aux,50)){
            p=strtok(aux,"*");
            n++;
            strcpy(e[n].nu,p);
            p=strtok(NULL,"*");
            strcpy(e[n].pre,p);
            p=strtok(NULL,"*");
            e[n].v=atoi(p);
            p=strtok(NULL,"*");
            e[n].g=atof(p);
    }
    f.close();
    int i,j;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(strcmp(e[j].nu,e[i].nu)<0)
                inter(e[j],e[i]);
    ofstream g("varsta.out");
    for(i=1;i<=n;i++)
        if(e[i].v>13)
            g<<e[i].nu<<" "<<e[i].v<<endl;
    g.close();
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(strcmp(e[i].pre,e[j].pre)<0)
                inter(e[j],e[i]);
    g.open("greutate.out");
    for(i=1;i<=n;i++)
        if(e[i].g<60)
            g<<e[i].nu<<" "<<e[i].pre<<" "<<e[i].g;
    return 0;
}
