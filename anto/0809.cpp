#include <iostream>
#include <cstring>
using namespace std;
int x[50];
//a
int p1(int x){
    if(x>0){
        if(x%2==1)
            return x%10*p1(x/10);
        else return p1(x/10);
    }else return 1;
}
//b
void p2(char s[],int i,int n){
    if(i<n){
        if(strchr("aeiou",s[i]))
            cout<<s[i]<<' ';
        p2(s,i+1,n);
    }
}
//c
void p3(int n){
    if(n>-1){
        cout<<n<<" ";
        p3(n-1);
        cout<<n<<" ";
    }else cout<<endl;
}
//d
void p4(int i,int j,int n){
    if(i<n)
        if(j<=n){
            if(x[i]>x[j]){
                int aux=x[i];
                x[i]=x[j];
                x[j]=aux;
            }
            p4(i,j+1,n);
    }
    else p4(i+1,i+2,n);

}
int p5(int x,int y){
    if(x%y!=0)
        return p5(y,x%y);
    else return y;
}
int p52(int x,int y){
    if(x*y!=0)
        if(x>y) return p52(x%y,y);
        else return p52(y,y%x);
    else return x+y;
}
//f
int p6(int x,int d){
    if(x>1){
        if(x%d==0)
            if(x/d%d==0) return p6(x/d,d);
            else return d+p6(x/d,d+1);
        else return p6(x,d+1);
    }else return 0;
}
int main()
{
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>x[i];
    cout<<p1(123);
    cout<<endl;
    p2("animale",0,strlen("animale"));
    cout<<endl;
    p3(4);
    cout<<endl;
    p4(1,2,n);
    for(i=1;i<=n;i++)
        cout<<x[i]<<" ";
    cout<<endl<<p5(21,70);
    cout<<endl<<p52(21,70);
    cout<<endl<<p6(120,2);
    return 0;
}
