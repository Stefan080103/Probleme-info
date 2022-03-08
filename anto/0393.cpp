#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    float p;
    ifstream f("alfa.txt");
    ofstream g("beta.txt");
    while(f>>a>>b>>c){
        if(a+b>c && b+c>a && a+c>b){
            p=(a+b+c)*1.0/2;
            g<<sqrt(p*(p-a)*(p-b)*(p-c));
        }
        else g<<0;
        g<<endl;
    }
    f.close();
    g.close();
    return 0;
}
