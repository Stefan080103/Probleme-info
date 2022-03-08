#include <iostream>
#include <fstream>
using namespace std ;
int b[10];
int main(){
	int i,x,aux,k=1,j;
	ifstream f("milion.txt");
	while(f>>x){
		aux=x/10%10;
		b[aux]=k;
		k++;
	}
	f.close();
	int Max=b[0];
	j=0;
	for(i=0;i<=9;i++)
		if(b[i]>=Max) Max=b[i];
 	cout<<Max;
	return 0;
}
