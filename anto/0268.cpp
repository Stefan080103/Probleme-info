#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,n,i,Min;
    ifstream f("bac.txt");
    f>>n;
    f>>x;
    Min=x;
    for(i=1;i<=n;i++){
        f>>x;
        if(x<Min)
            Min=x;
    }
    f.close();
    cout<<Min;
    return 0;
}
