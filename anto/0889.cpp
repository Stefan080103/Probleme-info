#include <iostream>
#include <fstream>
using namespace std;
void schimb(char &a,char &b){
    char aux=a; a=b; b=aux;
}
int main()
{
    char *a=new char;
    char *b=new char;
    char *c=new char;
    ifstream f("p3.txt");
    f.get(*a); f.get();
    f.get(*b); f.get();
    f.get(*c);
    f.close();
    if(*a>*b)
        schimb(*a,*b);
    if(*a>*c)
        schimb(*a,*c);
    if(*b>*c)
        schimb(*b,*c);
    char i;
    for(i=(*a+1);i<=(*b-1);i++)
            cout<<i<<" ";
    for(i=(*b+1);i<=(*c-1);i++)
            cout<<i<<" ";
    delete a;
    delete b;
    delete c;
    return 0;
}
