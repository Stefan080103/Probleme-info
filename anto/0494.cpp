#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char x[101],*p,y[101];
    cin.getline(x,101);
    strcpy(y,x);
    p=strtok(x,"*");
    int l,Max=0;
    while(p){
        l=strlen(p);
        if(l>Max)
            Max=l;
        p=strtok(NULL,"*");
    }
    p=strtok(y,"*");
    while(p){
        cout<<"*";
        l=strlen(p);
        if(l==Max)
            strrev(p);
        cout<<p;
        p=strtok(NULL,"*");
    }
    cout<<"*";
    return 0;
}
