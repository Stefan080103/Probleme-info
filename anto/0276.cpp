#include <iostream>
using namespace std;
int main()
{
    int x, nr=0;
    cout<<"dati sir incheiat cu numar negativ=";
    cin>>x;
    while(x>=0){
        if(x!=0)
            while(x%10==0)
                x=x/10;
        if(x==1) nr++;
        cin>>x;
    }
    cout<<nr;
    return 0;
}
