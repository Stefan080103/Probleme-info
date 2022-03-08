#include <iostream>
#include <fstream>
using namespace std;

int main()
{
int a, b, c, d, e, t;
ifstream f;
ofstream g;
f.open("intrare1.txt");
f>>a>>b>>c>>d>>e;
f.close();
if(a<0) t=t-1;
else t=t+1;
if(b<0) t=t-1;
else t=t+1;
if(c<0) t=t-1;
else t=t+1;
if(d<0) t=t-1;
else t=t+1;
if(e<0) t=t-1;
else t=t+1;
g.open("iesire1.txt");
if(t<0) g<<"-";
else g<<"+";
g.close();
return 0;
}
