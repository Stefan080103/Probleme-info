#include <iostream>
using namespace std;
int main()
{
    int nr, i, aux, x[1000], n;
    cout<<"introduceti lungimea unui vector :";
    cin>>n;
    cout<<"introduceti "<<n<<" elemente :";
    for(i=1;i<=n;i++)
        cin>>x[i];
    // metoda bulelor
    do{
        nr=0;
        for(i=1;i<=n-1;i++)
            if(x[i]>x[i+1]){
                aux=x[i];
                x[i]=x[i+1];
                x[i+1]=aux;
                nr++;
            }
    }while(nr>0);
    for(i=1;i<=n;i++)
        cout<<x[i]<<" ";
    return 0;
}
