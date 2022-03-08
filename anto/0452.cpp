#include <iostream>
#include <cstring>
using namespace std;
char a[207];
int main(){
    char s[101],*p;
    cin.getline(s,101);
    strlwr(s);
    p=strtok(s," ");
    while(p){
        p[0]=p[0]-32;
        strcat(a,p);
        strcat(a," ");
        p=strtok(NULL," ");
    }
    strcpy(s,a);
    int l=strlen(s);
    strcpy(s+l-1,s+l);
    cout<<s<<4;
    return 0;
}
