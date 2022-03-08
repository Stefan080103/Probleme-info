#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[257],x,b[]="aeiouAEIOU";
    int l,nr=0,i;
    char s[15];
    cin.getline(a,257);
    cin>>x; cin.get();
    cin.getline(s,15);
    //a) numarul de aparitii al unei litere in text
    l=strlen(a);
    for(i=0;i<l;i++)
        if(a[i]==x) nr++;
    cout<<"a)"<<nr<<endl;
    //b) cate vocale apar in text
    nr=0;
    for(i=0;i<=l-1;i++)
        if(strchr(b,a[i])!=NULL)
            nr++;
    cout<<"b)"<<nr<<endl;
    //c) numarul de aparitii al unei silabe
    char*p;
    nr=0;
    l=strlen(s);
    p=strstr(a,s);
    while(p!=NULL){
        strcpy(a,p+l);
        p=strstr(a,s);
        nr++;
    }
    cout<<"c)"<<nr;
    return 0;
}
