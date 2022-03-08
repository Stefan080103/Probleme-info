#include <iostream>

using namespace std;
unsigned bit(int n){
    unsigned cnt = 0;
  while (n) {
    cnt += n < 0;
    n <<= 1;
  }
  return cnt;
}
int main()
{
  int n;
  cin>>n;
  for(int i=n+1;;i++)
    if(bit(i)==bit(n))
    {
        cout<<i; break;
    }
}
