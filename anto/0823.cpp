#include <iostream>

using namespace std;
int cm(int a, int b){
    if(a==b)
        return b;
    else if(a>b)
        return cm(a-b,b);
        else return cm(a,b-a);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<cm(a,b);
    return 0;
}
