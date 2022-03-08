#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char x[101],v[]="maeiou";
    cin.getline(x,101);
    int i,l;
    for(i=0;i<strlen(x);)
        if(strchr(v,x[i])==NULL)
            strcpy(x+i,x+i+1);
        else
            i++;
    strcpy(v,v+1);
    int nr=0;
    l=strlen(x);
    for(i=0;i<l;i++)
        if(strchr(v,x[i]))
            nr++;
    if(nr>0)
        cout<<x;
    else cout<<"nu exista";
    return 0;
}
