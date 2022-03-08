#include <iostream>
#include <fstream>
using namespace std;


ofstream g("partitiimultime.out");
ifstream f("partitiimultime.in");

int v[10],n;

int Maxim(int k){
    int i,Max=0;
    for(i=1; i<=k; i++)
        if(v[i]>Max)
            Max=v[i];

    return Max;
}

int Solutie(int k){
    if(k==n)
        return 1;
    return 0;
}

void Afisare(){

    int i;
    for(i=1; i<=n; i++)
        g<<v[i]<<' ';

    g<<endl;
}
void Bk(int k){

    int i;
    for(i=1;i<=Maxim(k-1)+1; i++){
        v[k]=i;

        if(Solutie(k))
                Afisare();
        else Bk(k+1);
    }

}
int main(){
    f>>n;

    Bk(1);



return 0;
}
