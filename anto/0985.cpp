#include <iostream>
using namespace std;
int main()
{
    float x;
    int Max=0;
    cout<<"dati un sir de numere reale pozitive ";
    cin>>x;
    while(x!=0){
        if(x>Max)
            if(x==(int)x)
                Max=x;
        cin>>x;
    }
    cout<<Max;
    return 0;
}
