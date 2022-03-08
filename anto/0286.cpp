#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int x, Max;
   Max=-1;
   do{
        cin>>x;
        if(x>Max)
            Max=x;
   } while (sqrt(x)!=(int)sqrt(x));
    cout<<Max;
    return 0;
}
