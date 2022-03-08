#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin>>x;
    if(x>3)
        if(x<7)
            if(x%2==0)
                y=1;
    else
      y=2;
         else
            y=3;
              else
                y=4 ;
    cout<<y;
    return 0;
}
