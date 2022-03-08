#include <iostream>
#include <fstream>
using namespace std;
void div1(int &b){
    int i,s=0;
    for(i=2;i<=b/2;i++)
        if(b%i==0)
            s=s+i;
    if(s==0)
        cout<<b<<" ";

}
int main()
{
    int x;
    ifstream f("sir1.txt");
    while(f>>x)
        div1(x);
    return 0;
}
