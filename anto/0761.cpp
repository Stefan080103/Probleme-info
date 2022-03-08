#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n, c, k;
   ifstream f;
   ofstream g;
   f.open("numar.txt");
   f>>n>>c;
   f.close();
   k=0;
   do{
        if(n%10==c)
            k++;
        n=n/10;
   }while(n!=0);
   g.open("f22.out");
   g<<k;
   g.close();
    return 0;
}
