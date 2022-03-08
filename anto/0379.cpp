#include <iostream>
using namespace std;
int main()
{
    int j, i, aux, x[1000], n;
    cout<<"introduceti lungimea unui vector :";
    cin>>n;
    cout<<"introduceti "<<n<<" elemente :";
    for(i=1;i<=n;i++)
        cin>>x[i];
    // metoda bulelor 3
    for(i=1;i<n;i++)
        for(j=n;j>i;j--)
            if(x[j]<x[j-1]){
                aux=x[j];
                x[j]=x[j-1];
                x[j-1]=aux;
            }
    for(i=1;i<=n;i++)
        cout<<x[i]<<" ";
    return 0;
}
