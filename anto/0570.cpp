#include <iostream>
using namespace std;

int main()
{
    int n,v[49*2+1],i,j,aux;
    //citire vector
    cin>>n;
    for(i=1;i<=2*n;i++)
        cin>>v[i];
    //rezolvare pozitii impare
    i=1; j=2*n;
    while(i<j)
        if(v[i]%2==0)
            if(v[j]%2){ aux=v[i],v[i]=v[j],v[j]=aux;
            i=i+2,j=j-2;
            }
            else j=j-2;
        else i+=2;
    //rezolvare pozitii pare
    i=2;
    j=2*n-1;
    while(i<j)
        if(v[i]%2)
            if(v[j]%2==0){ aux=v[i],v[i]=v[j],v[j]=aux;
            i=i+2,j=j-2;
            }
            else j=j-2;
        else i+=2;
    //afisare rezultat
    for(i=1;i<=2*n;i++)
        cout<<v[i]<<" ";

    return 0;
}
