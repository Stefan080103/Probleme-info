#include <iostream>
#include <fstream>
using namespace std;
int y[5];
int main()
{
    int n,x,i;
    ifstream f("note.in");
    f>>n;
    for(i=1;i<=n;i++){
        f>>x;
        if(x<5) y[1]++;
        else if(x>=5 && x<=7) y[2]++;
            else if(x>=8 && x<=9) y[3]++;
                else if(x==10) y[4]++;
    }
    ofstream g("calcule.out");
    for(i=1;i<=4;i++)
        g<<y[i]<<endl;
    g.close();
    return 0;
}
