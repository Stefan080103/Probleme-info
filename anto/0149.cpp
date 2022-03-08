#include <iostream>
using namespace std;
void sumacifre(int x,int &s){
    s=0;
    while(x>0){
        s=s+x%10;
        x=x/10;
    }
}
int main(){
    int a,b,s1,s2;
    cin>>a>>b;
    sumacifre(a,s1);
    sumacifre(b,s2);
    cout<<s1<<endl<<s2;
    return 0;
}
