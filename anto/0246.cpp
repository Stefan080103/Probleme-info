 #include <iostream>
using namespace std;
int main()
{
    int x,y,u,p;
    cout<<"numar natural="; cin>>x;
    y=0;
    p=1;
    do{
        u=x%10;
        if(u%2==0){
            y=y+u*p;
            p=p*10;}
        x=x/10;
    }while(x!=0);
    if(p==1)
        cout<<"nu exista cifre pare";
    else
        cout<<y;
    return 0;
}
