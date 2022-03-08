#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101];
    int p,i,j,y;
    cin.getline(s,101);
    int l=strlen(s);
    cout<<l<<" ";
    for(i=0;i<l;i++)
        if(s[i]=='-'){
            cout<<i<< " ";
            for(j=i;j<=l;j++)
                if(s[i]==' ')
                   {

                     p=j; break;
                    cout<<p<<" ";
                   }
            y=p-i;
            for(j=i;j<=l;j++)
                s[j]=s[j+y];
            s[l-y+1]=NULL;
            l=l-y;
        }
    cout<<s;
    return 0;
}
