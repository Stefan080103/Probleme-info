#include <iostream>
#include <fstream>
using namespace std;
short int a[200001],p[200001];
void interschimbare(short int &x, short int &b)
{
    a[0]=x;
    x=b;
    b=a[0];
    p[0]=x;
    x=b;
    b=p[0];
}
int partitionare(short int s,short int d)
{

   int pivot=a[s];

   int l=s;

   for(int i=l+1; i<=d; i++)
        if(a[i]<pivot)
        {l++;
        interschimbare(a[i],a[l]);
        interschimbare(p[i],p[l]);
        }
    interschimbare(a[s], a[l]);
    interschimbare(p[s], p[l]);
    return l;
}

void QuickSort(int s,int d)
{       int LocPivot;



    if(s<d)
    {
        LocPivot=partitionare(s,d);
        QuickSort(s,LocPivot-1);
        QuickSort(LocPivot+1,d);

    }

}
int main()
{
    ifstream f("sum2.in");
    int n,s,i,j;
    f>>n>>s;
    for(i=1;i<=n;i++) f>>a[i],p[i]=i;
    f.close();
    QuickSort(1,n);
    for(i=1;i<=n;i++) cout<<a[i]<<" "<<p[i]<<endl;
    return 0;
}
