#include <iostream>
using namespace std;
int main()
{
    int x,ss=0,s,aux;
    cout<<"sir incheiat cu 0"<<endl;
    cin>>x;
    while(x>0){
        aux=x;
        //suma cifrelor x
        s=0;
        while(x>0){
            s=s+x%10;
            x=x/10;
        }
        //------------
        if(s%2!=0) ss=ss+aux;
        cin>>x;
    }
    if(ss==0) cout<<"nu exista";
    else cout<<ss;
    return 0;
}
