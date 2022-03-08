#include <iostream>
using namespace std;

int main(){
        int i,v[10];
        for(i=1;i<10;i++)
            cin>>v[i];
        i=v[7];
        do{
            cout<<i<<" ";
            i=v[i];
        }while(i!=1);
        cout<<i;

}
