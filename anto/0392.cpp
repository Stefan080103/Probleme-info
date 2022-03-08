#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a,b,c;
    ifstream f("alfa.txt");
    ofstream g("beta.txt");
    while(f>>a>>b>>c){
        if(a*a+b*b==c*c || a*a==b*b+c*c || b*b==a*a+c*c){
            g<<"dreptunghic";
            if(a==b ||b==c|| a==c) g<<"isoscel";
        }
        else if(a==b&&b==c) g<<"echilateral";
            else if(a==b || b==c || a==c) g<<"isoscel";
                else g<<"oarecare";
        g<<endl;
    }
    g.close();
    f.close();
    return 0;
}
