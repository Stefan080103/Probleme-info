#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[50];
    cin.getline(a,50);
    //a)
    int l=strlen(a);
    cout<<a[l-2]<<endl;
    //b)
    char *p=strchr(a,'B');
    while(p!=NULL){
        strcpy(p,p+1);
        p=strchr(a,'B');
    }
    cout<<a<<endl;
    //c)
    int i;
    for(i=0;i<l;i++)
        if(strchr("AEIOU",a[i])!=NULL)
            break;
    cout<<a+i<<endl;
    //d)
    a[1]=a[1]+32;
    cout<<a<<endl;
    //e)
    strcat(a,"A");
    cout<<a;
    return 0;
}
