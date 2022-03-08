#include <iostream>

using namespace std;
void inter(int &a,int &b){
    int aux;
    aux=a,a=b,b=aux;
}
int main()
{
    int n,a[100],i,j;
    cin>>n;
    for (i=1;i<=2*n;i++)
        cin>>a[i];
    for (i=1;i<2*n;i++){
            if(i%2)
                if(a[i]%2==0)
                    for(j=i+1;j<=2*n;j++)
                        if(a[j]%2) {
                            inter(a[i],a[j]);
                            break;
                        }
            if(i%2==0)
                if(a[i]%2!=0)
                    for(j=i+1;j<=2*n;j++)
                        if(a[j]%2==0) {
                            inter(a[i],a[j]);
                            break;
                        }
    }
    for (i=1;i<=2*n;i++)
        cout<<a[i]<<" ";
    return 0;
}
