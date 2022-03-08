
#include <iostream>
#include <fstream>
using namespace std;

int n1,n2,x1,x2,ok=0;

int main()
{
    ifstream f1("bac1.txt");
    ifstream f2("bac2.txt");
    f1>>n1;
    f2>>n2;

    n1--;
    n2--;
    f1>>x1;
    f2>>x2;
    while (n1!=-1 && n2!=-1)
    {
        if(x1<x2){
            if(x1%5==0) cout<<x1<<" ",ok=1;
            f1>>x1;
            n1--;
        }
        else if(x1==x2){
            f1>>x1;
            f2>>x2;
            n1--;
            n2--;
        }

        else {
            if(x2%5==0) cout<<x2<<" ",ok=1;
            f2>>x2;
            n2--;
        }

    }
    while(n1!=-1){
        if(x1%5==0) cout<<x1<<" ",ok=1;
        f1>>x1;
        n1--;
    }
    while(n2!=-1){
        if(x2%5==0) cout<<x2<<" ",ok=1;
        f2>>x2;
        n2--;
    }

    f1.close();
    f2.close();

    if(!ok)
        cout<<"Nu exista!";

    return 0;
}
