#include <iostream>
using namespace std;
int main()
{
    int n,x[26],i;
    //citire vector
    cout<<"dati lungimea unui vector=";
    cin>>n;
    //citirea numerelor in vector
    cout<<" dati "<<n<<" numere intregi";
    for(i=1;i<=n;i++)
        cin>>x[i];
    //scrierea numerelor in ordine inversa
    for(i=n;i>=1;i--)
        cout<<x[i]<<" ";
    cout<<endl;
    //scrierea numerelor negative in ordine inversa
    for(i=n;i>=1;i--)
        if(x[i]<0)
            cout<<x[i]<<" ";
    return 0;
}
