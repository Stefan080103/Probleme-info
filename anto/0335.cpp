#include <iostream>

using namespace std;

int main()
{
   float x, y, f;
   cout<<"x este egal cu"; cin>>x;
   cout<<"y este egal cu"; cin>>y;
   if(x>0 && y>0)
   f=(x+y)/2*x*y;
   else
     if(x==0 || y==0 )
     f=max(x,y);
     else
        f=(1.0/x+1.0/y)*(1.0/x-1.0/y+2*x*y+x*x+y*y);
     cout<<"f este egal cu "<<f;
    return 0;
}
