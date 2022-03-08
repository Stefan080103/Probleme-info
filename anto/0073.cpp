#include <iostream>
using namespace std;
int t[10000];
int main()
{
    int n,a,b,c;
    int m[10000];
    cin>>a>>b>>c>>n;
    int i;
    for(i=1;i<=n;i++)
        cin>>m[i];
    int j;
    //a
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(a*m[i]*m[i]+b*m[j]*m[j]==c && (t[m[i]]==0 || t[m[j]]==0) && a*m[j]*m[j]+b*m[i]*m[i]==c)
                cout<<"("<<m[i]<<","<<m[j]<<")"<<" "<<"("<<m[j]<<","<<m[i]<<")"<<" ",t[m[i]]=1,t[m[j]]=1;
            else if(a*m[i]*m[i]+b*m[j]*m[j]==c && (t[m[i]]==0 || t[m[j]]==0)) cout<<"("<<m[i]<<","<<m[j]<<")"<<" ",t[m[i]]=1,t[m[j]]=1;
                else if((t[m[i]]==0 || t[m[j]]==0) && a*m[j]*m[j]+b*m[i]*m[i]==c) cout<<"("<<m[j]<<","<<m[i]<<")"<<" ",t[m[i]]=1,t[m[j]]=1;
     //b
     int nr=0;
     for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(a*m[i]*m[i]+b*m[j]*m[j]==c && (t[m[i]]==0 || t[m[j]]==0) && a*m[j]*m[j]+b*m[i]*m[i]==c)
               nr++,t[m[i]]=1,t[m[j]]=1;
            else if(a*m[i]*m[i]+b*m[j]*m[j]==c && (t[m[i]]==0 || t[m[j]]==0)) nr++,t[m[i]]=1,t[m[j]]=1;
                else if((t[m[i]]==0 || t[m[j]]==0) && a*m[j]*m[j]+b*m[i]*m[i]==c) nr++,t[m[i]]=1,t[m[j]]=1;
    cout<<endl<<nr;
    return 0;
}
