#include <iostream>
#include <fstream>
using namespace std;
void calc(int a,int &Min,int &Max){
    Max=Min=a%10;
    a=a/10;
    while(a>0){
        if(Max<a%10)
            Max=a%10;
        if(Min>a%10)
            Min=a%10;
        a=a/10;
    }
}
int main()
{
    int x,Min,Max;
    ifstream f("sir3.txt");
    while(f>>x){
        calc(x,Min,Max);
        if(Min==Max)
            cout<<x<<" ";
    }
    return 0;
}
