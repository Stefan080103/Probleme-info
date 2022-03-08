#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char x[101],y[201];
    cin.getline(x,101);
    int l=strlen(x),j=0,i;
    for(i=0;i<l;i++){
        y[j++]=x[i];
        if(strchr("aeuio",x[i]))
            y[j++]=x[i];
    }
    y[j]=0;
    cout<<y;
    return 0;
}
