#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int a,b,k=0,x[101],i,p,q;
    cin>>a>>b;
    p=1; q=1;
    while(p<a){
        if(p<a)
            for(i=1;i<=9;i++)
                if(p<a)
                    p=p+q;
                else break;
        else q=q*10+1;
    }
    while(p<=b){
        p=q;
        for(i=1;i<=9;i++)
            if(p<=b)
                x[++k]=p,p=p+q;
            else break;
        q=q*10+1;
    }
     if(k==0) cout<<"nu exista";
    else {
        cout<<k<<endl;
        for(i=1;i<=k;i++)
            cout<<x[i]<<" ";
    }
}
