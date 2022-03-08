#include <iostream>
using namespace std;
int main()
{
    int m,b,z;
    cin>>b;
    m=1;
    do{
        z=b%10;
        if(z%2==0)
            m=z;
        b=b/10;
    }while(b!=0);
    if(m==1)
        cout<<"nu exista";
    else cout<<m;
    return 0;
}

