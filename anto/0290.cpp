#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int x[26];
int main()
{
    char s[21];
    ifstream f("cuvant.in");
    f.getline(s,21);
    f.close();
    int l=strlen(s),i,ok=1;
    for(i=0;i<l;i++)
        x[s[i]-'a']++;
    for(i=0;i<=25;i++)
        if(x[i]>1){ok=0;break;}
    if(ok==1) cout<<"da";
    else cout<<"nu";
    return 0;
}
