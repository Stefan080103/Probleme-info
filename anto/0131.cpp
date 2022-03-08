#include <iostream>
#include <fstream>
using namespace std;
int prim(int a){
    int i,p=0;
    for(i=2;i*i<=a;i++)
        if(a%i==0){p=i;break; }
    if(p==0 && a>1)
        return 1;
    else
        return 0;
}
void citire(int &l,int v[]){
    int n,i,aux;
    ifstream f("p1.txt");
    f>>n;
    l=0;
    for(i=1;i<=n;i++){
        f>>aux;
        if(prim(aux)==1)
            v[++l]=aux;
    }
    f.close();
}
void ordonare(int l,int v[]){
    int i,j,aux;
    for(i=1;i<=l-1;i++)
        for(j=i+1;j<=l;j++)
            if(a[i]>a[j]){
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
}
void afisare(int l,int v[]){
    int i;
    ofstream g("p1.out");

}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
