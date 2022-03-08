#include <iostream>
#include <cstring>
using namespace std;
int a[101];
int main()
{
    char s[101]; int i;
    cin.getline(s,100);
    int n=strlen(s);
    strlwr(s);
    for(i=0;i<n;i++)
        a[s[i]-64]++;
    int Max=a[0];
    for(i=1;i<n;i++)
        if(a[i]>Max)
            Max=a[i];
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
