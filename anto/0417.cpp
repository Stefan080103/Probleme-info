#include <iostream>
using namespace std;
int main()
{
    int x,Min=10000,aux;
    cout<<"sir incheiat cu un numar negativ"<<endl;
    cin>>x;
    while(x>=0){
        if(x<Min){
            aux=x;
            while(x>9 && x/10%10==x%10)
                x=x/10;
            if(x<=9) Min=aux;
        }
        cin>>x;
    }
    if(Min==10000) cout<<"nu exista";
    else cout<<Min;
    return 0;
}
