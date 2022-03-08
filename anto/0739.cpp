#include <iostream>
using namespace std;
int main()
{
    int x,u,Max,nr;
    cout<<"introduceti un numar="; cin>>x;
    Max=-1;
    nr=0;
    do{
        u=x%10;
        if(u%2==0)
            if(u>Max){
                Max=u;
                nr++;
            }
        x=x/10;
    }while(x!=0);
    if(nr==0)
        cout<<"nu exista cifre pare";
    else cout<<Max;
    return 0;
}
