#include <iostream>
#include <cstring>
using namespace std;
char s[26];
//iterativ
int verif(){
    int l=strlen(s),i,j;
    for(i=0;i<l-1;i++)
        for(j=i+1;j<l;j++)
        if(s[i]==s[j]) return 0;
    return 1;
}
int rec(int i,int j,int l){
    if(i<l-1)
        if(j<l)
            if(s[i]==s[j])
                return 0;
            else return rec(i,j+1,l);
        else return(i+1,i+2,l);
    else return 1;

}
int main()
{
    cin.getline(s,26);
    if(verif()==1) cout<<"da";
    else cout<<"nu";


    return 0;
}
