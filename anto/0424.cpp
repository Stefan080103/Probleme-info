#include <iostream>
using namespace std;
int main()
{
    int n,x[101],i,j,aux;
    //citire lungime vector
    cout<<"dati lungimea unui vector : ";
    cin>>n;
    // citire vector
    cout<<"introduceti "<<n<<" elemente : ";
    for(i=1;i<=n;i++)
        cin>>x[i];
    //stergerea primului numar par
    for(i=1;i<=n;i++)
        if(x[i]%2==0){
            for(j=i+1;j<=n;j++)
                x[j-1]=x[j];
            n--;
            break;
        }
    //afisare punctul a
    for(i=1;i<=n;i++)
        cout<<x[i]<<" ";
    cout<<endl;
    //inserarea dupa ultimul numar impar triplul sau
    for(i=n;n>=1;i--)
        if(x[i]!=0){
            for(j=n;j>=i+1;j--)
                x[j+1]=x[j];
            x[i+1]=3*x[i];
            n++;break;
        }
    //afisare punct b
    for(i=1;i<=n;i++)
        cout<<x[i]<<" ";
    cout<<endl;
    //permutare circulara spre stanga a noului vector
    aux=x[1];
    for(i=2;i<=n;i++)
        x[i-1]=x[i];
    x[n]=aux;
    //afisare punct c
    for(i=1;i<=n;i++)
        cout<<x[i]<<" ";
    return 0;
}
