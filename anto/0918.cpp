#include <iostream>
#include <fstream>
using namespace std;
int calc(int a,int &Min){
    int Max;
    Max=Min=a%10;
    a=a/10;
    while(a>0){
        if(Max<a%10)
            Max=a%10;
        if(Min>a%10)
            Min=a%10;
        a=a/10;
    }
    return Max;
}
int main()
{
    int x,Min;
    ifstream f("sir3.txt");
    while(f>>x){
        if(Min==calc(x,Min))
            cout<<x<<" ";
    }
    return 0;
}
