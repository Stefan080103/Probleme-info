#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char x[50];
    cin.getline(x,50);
    //a)
    int l=strlen(x);
    cout<<x[l-1];
    cout<<endl;
    //b)
    char *p=strchr(x,'a');
    while(p!=NULL){
        strcpy(p,p+1);
        p=strchr(x,'a');
    }
    cout<<x<<endl;
    //c)
    int i;
    for(i=0;i<l;i++)
        if(strchr("aeiou",x[i])!=NULL)
            break;
    cout<<x+i<<endl;
    //d)
    x[0]=x[0]-32;
    cout<<x[0]<<endl;
    //e)
    strcat(x,"b");
    cout<<x;
    return 0;
}
