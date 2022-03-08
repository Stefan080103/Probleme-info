#include <iostream>
using namespace std;
int main()
{
    int A, y, p,u;
    cout<<"introduceti un numar natural=";
    cin>>A;
    p=1; y=0;
    while(A!=0){
        u=A%10;
        if(u%2==0){
            y=y+u*p;
            p=p*10;
        }
        A=A/10;
    }
    if(p==1)
        cout<<"NU EXISTA";
    else
        cout<<y;
    return 0;
}
