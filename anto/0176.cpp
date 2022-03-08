#include <iostream>
#include <fstream>
using namespace std;
float x[101];
int n;
int main()
{
    float a ,aux;
    int i,j;
    //citire fisier => vector
    ifstream f("f1.txt");
    while(f>>a)
        x[++n]=a;
    f.close();
    //afisare vector
    ofstream g("f1.txt");
    for(i=1;i<=n;i++)
        g<<x[i]<<" ";
    //permutare vector x cu o pozitie spre stanga
    aux=x[1];
    for(i=2;i<=n;i++)
        x[i-1]=x[i];
    x[n]=aux;
    g<<endl;
    //afisare vector
    for(i=1;i<=n;i++)
        g<<x[i]<<" ";
    g<<endl;
    //ordonare crescatoare vector x
    for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
            if(x[i]>x[j]){
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;
            }
    //afisare vector
    for(i=1;i<=n;i++)
        g<<x[i]<<" ";
    g.close();
    return 0;
}

