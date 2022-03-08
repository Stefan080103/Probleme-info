#include <iostream>
#include <cstring>
using namespace std;
void generatoare(int n){
    int a,b;
    for(a=2;a<=n/2;a+=2)
        for(b=n/2;b>=1;b--)
            if(a*b+a/b==n) cout<<a<<"-"<<b<<" ";
}
int main()
{
    char s[20];
    int i,j;
    strcpy(s,"optsprezece");
    i=0,j=strlen(s)-1;
    while(i<j){
        if(strchr("aeiou",s[i])==NULL && strchr("aeiou",s[j])!=NULL){
            s[i]=s[i]+1;
            s[j]=s[j]-1;
        }
        i++;
        j--;
    }
    cout<<s;
    return 0;
}
