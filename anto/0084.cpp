#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
#include <climits>
#include <fstream>
using namespace std;
int f(int x,int y,int p){
    if(y)
        if(y%2==0)
            return y%10*p+f(x/10,y/10,p*10);
        else return x%10*p+f(x/10,y/10,p*10);
    else return 0;
}
int main()
{
    cout<<f(1234,6789,1);
}
