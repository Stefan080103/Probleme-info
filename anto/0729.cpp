#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int g1 ,m1 , s1;
    int g2 ,m2 , s2;
    int S, M, G;
    ifstream f;
    ofstream g;
    f.open("intra.txt");
     f>>g1>>m1>>s1>>g2>>m2>>s2;
    f.close();
    if(s1<s2){
        s1=s1+60;
        m1--;
    }
    if(m1<m2){
        m1=m1+60;
        g1--;
    }
    S=s1-s2;
    M=m1-m2;
    G=g1-g2;
    M=M-S/60;
    S=S%60;
    G=G-M/60;
    M=M%60;
    g.open("iesi.txt");
    g<<G<<endl<<M<<endl<<S;
    g.close();
    return 0;
}
