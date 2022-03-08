#include <iostream>
using namespace std;
int main()
{
    int X,u,c1,c2,y,p;
    cout<<"dati numar natural";
    cin>>X;
    cout<<"dati doua cifre diferite";
    cin>>c1>>c2;
    y=0;
    p=1;
    do{
        u=X%10;
        if(c1==u){
            y=y+c2*p;
            p=p*10;
    }else{
        y=y+u*p;
        p=p*10;
    }
        X=X/10;
    }while(X!=0);
    cout<<y;
    return 0;
}
