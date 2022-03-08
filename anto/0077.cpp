#include <iostream>
#include <cstring>
using namespace std;
char c[101];
int main()
{
    char s[101];
    int l;
    cin.getline(s,101);
    char *p=strtok(s," ");
    while(p){
        if(p[0]!='-') {strcat(c,p);strcat(c," ");}
         p=strtok(NULL," ");
    }
    l=strlen(c);

    strcpy(s,c);
    cout<<c<<2;
    return 0;
}
