#include <iostream>

using namespace std;

int main()
{
   int x,y;
   cin>>x;
   y=0;
   do{
    y=y*10+9-x%10;
   }while(x<=y || y==0);
   cout<<y;
    return 0;
}
