#include <fstream>
#include <iostream>
using namespace std;

int n,v[100],m;
ifstream f("partitiimultime.in");
ofstream g("partitiimultime.out");
int maxim(int k){
    int i,Max=0;
    for(i=1;i<=k; i++)
        if(v[i]>Max)
            Max=v[i];
    return Max;
}
int Valid(int k){
int i;

        return 0;

}

int Solutie(int k){
    int ok=0,i;
    for(i=1;i<=k; i++)
        if(v[k]==m)
            ok=1;
   if(ok==1)
        if(k==n)
            ok=1;
        else ok=0;
    return ok;
}
void Afisare(){
    int i,j,ok=0;

    for(i=1; i<=n; i++){
            ok=0;
        for(j=1; j<=n; j++)
            if(v[j]==i)
                g<<j,ok=1;
            if(ok)
                g<<"*";
    }
       g<<endl;
     /*  for(i=1; i<=n; i++)
            cout<<v[i];
       cout<<endl;*/

}

void Bk(int k){

    int i;

    for(i=1; i<=maxim(k-1)+1; i++){
        v[k]=i;
            if(Solutie(k))
                Afisare();
            else Bk(k+1);
    }

}

int main(){
   f>>n>>m;
    Bk(1);
}
