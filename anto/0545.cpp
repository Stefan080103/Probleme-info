#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;
int mari(char x[]){
    int l=strlen(x),i,nr=0;
    for(i=0;i<l;i++)
        if(x[i]>='A' && x[i]<='Z')
            nr++;
    if(nr==l) return 1;
    else return 0;
}
int main()
{
    char s[3*25+3],*p;
    int k,nr=0;
    ifstream f("teza1.txt");
    while(f.getline(s,26)){
        p=strtok(s," ");
        k=0;
        while(p!=NULL){
            if(mari(p)==1)
                k++;
            p=strtok(NULL," ");
        }
        if(k==1) nr++;
    }
    f.close();
    cout<<nr;
    return 0;
}
