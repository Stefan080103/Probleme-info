#include <iostream>
using namespace std;
int main()
{
    int x, d=2;
    cout<<"dati un numar natural nenul= ";
    cin>>x;
    while(x>1){
        while(x%d==0)
            x=x/d;
        d++;
    }
    if(d==2)
        cout<<"nu exista";
    else cout<<d-1;
    return 0;
}
