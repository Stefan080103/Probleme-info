#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int A,B,p,u;
    //citim datele de intrare
    ifstream f;
    f.open("bilet31.txt");
    f>>A;
    f.close();
    //rezolvam problema
    p=1;
    B=0;
    do{
        u=A%10;
        if(u%2==0){
            B=B+u*p;
            p=p*10;
        }
        A=A/10;
    }while(A>0);
    if(p==1) cout<<"NU MAI EXISTA";
    else{
        ofstream g;
        g.open("bilet31.out");
        g<<B;
        g.close();
    }
    return 0;
}
