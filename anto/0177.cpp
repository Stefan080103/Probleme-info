#include <iostream>
#include <fstream>
using namespace std;
int n,a[101],b[101],z[202],p;
void citire(){
    int i;
    ifstream f("f1.txt");
    f>>n;
    for(i=1;i<=n;i++)
        f>>a[i];
    f.close();
}
void ordonarea(){
    int i,j,aux;
    for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
            if(a[i]<a[j]){
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
}
void construire(){
    int i,aux;
    for(i=1;i<=n;i++){
        aux=a[i];
        while(aux>0){
            b[i]=b[i]+aux%10;
            aux=aux/10;
        }
    }
}
void ordonareb(){
    int i,j,aux;
    for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
            if(b[i]<b[j]){
                aux=b[i];
                b[i]=b[j];
                b[j]=aux;
            }
}
void interclasare(){
    int i=n;
    while(i>=1)
        if(a[i]>b[i]) z[++p]=a[i++];
        else z[++p]=b[i++];
    for(;i<=n;i++) z[++p]=a[i];
    for(;i<=n;i++) z[++p]=b[i];
}
void afisare1(){
    int i;
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
}
void afisare2(){
    int i;
    for(i=1;i<=n;i++)
        cout<<b[i]<<" ";
}
void afisare3(){
    int i;
    for(i=1;i<=n;i++)
        cout<<z[i]<<" ";
}
int main(){
    citire();
    afisare1();
    cout<<endl<<endl;
    ordonarea();
    afisare1();
    cout<<endl<<endl;
    construire();
    afisare2();
    cout<<endl<<endl;
    ordonareb();
    afisare2();
    cout<<endl<<endl;
    interclasare();
    afisare3();
    return 0;
}
