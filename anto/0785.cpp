#include <iostream>
#include <fstream>
using namespace std;
int n,a[101];
void citire(){
    ifstream f("vector.txt");
    f>>n;
    int i;
    for(i=1;i<=n;i++)
        f>>a[i];
    f.close();
}
void scrie()
{
    int i;
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void schimb(int &a,int &b){
    int aux=a;
    a=b;
    b=aux;
}
void selectie(){
    int p,i,j;
    for(i=1;i<n;i++){
        p=i; // pozitia minimului
        for(j=i+1;j<=n;j++)
            if(a[j]<a[p])
                p=j;
        //se aduce minimul in prima pozitie a secventei nesortate
        if(p!=i)
            schimb(a[i],a[p]);
    }
}
void bule1(){
    int s,i;
    do{
        s=0;
        for(i=1;i<n;i++)
            if(a[i]>a[i+1])
                schimb(a[i],a[i+1]),s=1;
    }while(s);
}
void bule2(){
    int s,i;
    do{
        s=0;
        for(i=1;i<n;i++)
            if(a[i]>a[i+1])
                schimb(a[i],a[i+1]),s=i;
    }while(s>1);
}
void bule3(){
    int inter,fin,i;
    fin=n;
    do{
        inter=0;
        for(i=1;i<fin;i++)
            if(a[i]>a[i+1])
                schimb(a[i],a[i+1]),inter=i;
        fin=inter;
    }while(fin>1);
}
void bule4(){
    int i,j;
    for(i=n;i>1;i--)
        for(j=1;j<i;j++)
            if(a[j]>a[j+1])
                schimb(a[j],a[j+1]);
}
void insertie(){
    int i,aux,j;
    for(i=2;i<=n;i++){
        aux=a[i];
        for(j=i-1;j>=1;j--)
            if(a[j]>aux)
                a[j+1]=a[j];
            else break;
        a[j+1]=aux;
    }
}
int main()
{
    citire();
    scrie();
    selectie();
    scrie();
    cout<<endl;
    citire();
    scrie();
    bule1();
    scrie();
    cout<<endl;
    citire();
    scrie();
    bule2();
    scrie();
    cout<<endl;
    citire();
    scrie();
    bule3();
    scrie();
    cout<<endl;
    citire();
    scrie();
    bule4();
    scrie();
    cout<<endl;
    citire();
    scrie();
    insertie();
    scrie();
    cout<<endl;
    return 0;
}
