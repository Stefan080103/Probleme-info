#include <iostream>
using namespace std;
int main()
{
    int x, aux, o,Max=-1;
    cout<<"sir incheiat cu negativ"<<endl;
    cin>>x;
    while(x>=0){
        if(x>Max) {
            aux=x;
            o=0;
            while(x>0){
                o=o*10+x%10;
                x=x/10;
            }
            if(o==aux) Max=aux;
        }
        cin>>x;
    }
    if(Max==-1)
        cout<<"nu exista";
    else
        cout<<Max;
    return 0;
}
