#include <iostream>
#include <fstream>
using namespace std;

int n,a[7][7];
ifstream f("gengraf.in");
ofstream g("gengraf.out");

int Putere(int baza, int exponent){
    int aux;
    if(exponent==1)
            return baza;
    else if(exponent%2==0){
        aux=Putere(baza,exponent/2);
        return aux*aux;
    }
    else {
        aux=Putere(baza,exponent-1);
        return baza*aux;
    }

}

void Afisare(){

    int i,j;
    for(i=1; i<=n; i++,g<<endl)
        for(j=1; j<=n; j++)
           g<<a[i][j]<<' ';


}
void Bk(int i, int j){

    if(i==j)
        if(i==n){
            Afisare();
            g<<endl;

        }
        else Bk(i+1,1);
    else{
    int k;
    for(k=0; k<=1; k++){
        a[i][j]=k;
        a[j][i]=k;
        Bk(i,j+1);
    }

}



}
int main(){
    f>>n;
    g<<Putere(2,(n-1)*n/2)<<endl;
    Bk(1,1);





return 0;
}
