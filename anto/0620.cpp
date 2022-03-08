#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char x[50],Min[50],y[50],c[100];
    int n,i;
    cin>>n; cin.get();
    cin.getline(x,50);
    cin.getline(y,50);
    strcpy(Min,strcat(x,y));
    for(i=3;i<=n;i++){
        cin.getline(x,50);
        strcpy(c,strcat(y,x));
        if(strcmpi(Min,c)<0)
            strcpy(Min,c);
        c[0]=0;
        strcpy(y,x);
    }
    cout<<Min;
    return 0;
}
