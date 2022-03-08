#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,d;
    //citim datele de intrare
    ifstream f;
    ofstream g;
    f.open("bilet21.txt");
    f>>x;
    f.close();
    d=2;
    while(x>1){
        while(x%d==0)
            x=x/d;
        d++;
    }
    g.open("bilet21.out");
    if(d==2)
        cout<<"nu exista";
    else{
        g<<d-1;
        g.close();
        }
    return 0;

}
