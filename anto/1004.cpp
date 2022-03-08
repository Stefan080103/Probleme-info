#include <iostream>
#include <fstream>
#include <climits>
using namespace std;



int main(){ int x, Max=-1,Min=INT_MAX;

ifstream f("bac.txt");

while(f>>x){

    if(x>9 && x<100){
            if(x>Max)
                Max=x;
            if(x<Min)
                Min=x;
    }
}

f.close();
if(Max==-1)
    cout<<"nu exista";
else cout<<Min-1<<" "<<Max+1;




return 0;
}
