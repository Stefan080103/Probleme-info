#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,y;
    ifstream f;
    ofstream g;
    f.open("intra3.txt");
    f>>x>>y;
    f.close();
    g.open("iesire3.txt");
    if(x>=0 && y>=0)
        g<<"1";
    else
        if(x<0 && y>=0)
            g<<"2";
        else
            if(x<0 && y<0)
                g<<"3";
            else
                if(x>=0 && y<0)
                    g<<"4";
    g.close();
    return 0;
}
