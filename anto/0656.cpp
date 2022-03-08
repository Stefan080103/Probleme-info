#include <iostream>
#include <fstream>
using namespace std;
ofstream g("pi.txt");
void pi(){
    int i;
    cin>>i;
    if (i!=0){
        if (i%2==0)
            g<<i<<' ';
        pi();
        if(i%2!=0)
            g<<i<<' ';
    }g<<endl;
}
int main(){
    pi();
    g.close();
    return 0;
}
