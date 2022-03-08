#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main()
{
    char x[301],y[302],*p;
    //citire text
    ifstream f("p6.txt");
    f.getline(x,301);
    f.close();
    strrev(x);
    //separam textul in unitati lexicografice
    p=strtok(x," ");
    while(p){
        if(strlen(p)%2==0){
            strcat(y,"*");
            strrev(p);
            strcat(y,p);
        }
        p=strtok(NULL," ");
    }
    strcpy(y,y+1);
    //rescrierea fisierului
    ofstream g("p6.txt");
    g<<y;
    g.close();
    return 0;
}
