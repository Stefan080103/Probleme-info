#include <iostream>
#include <fstream>
using namespace std;

ifstream f("permutari2.in");
ofstream g("permutari2.out");

int v[11],x[11],n;

int Valid(int k){
    int i;
    for(i=1; i<k; i++)
        if(v[i]==v[k])
            return 0;
    return 1;
}
int Solutie(int k){
    if(k==n)
        return 1;
    return 0;
}
void Afisare(){
    int i;
    for(i=1; i<=n; i++)
        g<<x[v[i]]<<' ';
    g<<endl;
}
void Bk(int k){

    int i;
    for(i=1; i<=n; i++){
        v[k]=i;
        if(Valid(k))
            if(Solutie(k))
                Afisare();
            else Bk(k+1);
    }

}

int main(){
    int i,j;
    f>>n;
    for(i=1; i<=n; i++)
        f>>x[i];

    ///sortare
    for(i=1; i<n; i++)
        for(j=i+1; j<=n; j++)
            if(x[i]>x[j]){
                x[0]=x[i];
                x[i]=x[j];
                x[j]=x[0];
            }


    Bk(1);



return 0;
}
