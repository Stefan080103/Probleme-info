#include <iostream>
#include <fstream>
using namespace std;


ifstream f("produscartezian2.in");
ofstream g("produscartezian2.out");

int v[16],A[8],n,Max;
void Afisare(){

    int i;

    for(i=1; i<=n; i++)
        g<<v[i]<<' ';
        g<<endl;


}
int Valid(int x){
    int i;
    for(i=1; i<=x; i++)
        if(v[i]>A[i])
            return 0;
    return 1;

}
int Solutie(int x){

    if(x==n)
        return 1;
    return 0;
}
void Bk(int k){

    int i;

    for(i=1; i<=A[k]; i++){
        v[k]=i;
        if(Valid(k))
            if(Solutie(k))
                Afisare();
            else Bk(k+1);
    }


}

int main(){

    f>>n;
    int i;
    for(i=1; i<=n; i++)
        f>>A[i];

    Bk(1);

return 0;
}
