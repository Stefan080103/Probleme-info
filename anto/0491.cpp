#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[421]="",x[21][21];
    int n,k,i;
    //citire date
    cout<<"n=";
    cin>>n; cin.get();//citire enter
    cout<<n<<" cuvinte "<<endl;
    for(i=1;i<=n;i++)
        cin.getline(x[i],21);
    cout<<" k="; cin>>k;
    //concatenam cuvintele cu lungime k
    for(i=1;i<=n;i++)
        if(strlen(x[i])==k){
            strcat(a," ");
            strcat(a,x[i]);
        }
    //concatenam restul cuvintele
    for(i=1;i<=n;i++)
        if(strlen(x[i])!=k){
            strcat(a," ");
            strcat(a,x[i]);
        }
    //stergem primul spatiu
    strcpy(a,a+1);
    cout<<a;
    return 0;
}
