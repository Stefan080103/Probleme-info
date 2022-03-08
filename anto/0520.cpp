#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

int main()
{
    int m1,m2,x;
    m1=m2=INT_MAX;
    ifstream f("bac.txt");
    while(f>>x){
        if(x<m1 ) m1=x;
        if(x<m2 && x!=m1 && m1!=m2 ) m2=x;
    }
    f.close();
    if(m2==INT_MAX) cout<<"nu exista";
    else cout<<m1<<" "<<m2;
    return 0;
}
