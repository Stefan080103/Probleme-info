#include <iostream>

using namespace std;

int main()
{
   float a, b, c, p;
   cout<<"a este egal cu "; cin>>a;
   cout<<"b este egal cu "; cin>>b;
   cout<<"c este egal cu "; cin>>c;
   if(a!=0){
           if(a<0)
            cout<<"a negativ";
           else
            cout<<"a pozitiv";
            if(b<0)
            cout<<"b negativ";
            else
            cout<<"b pozitiv";
            if(c<0)
            cout<<"c negativ";
            else
            cout<<"c pozitiv";}
    else
        cout<<"imposibil";

        if((int)a==a)
                if(a<0)
                    cout<<"a intreg";
                else
                    cout<<"a natural";
        else
            cout<<"a real";
        if((int)b==b)
                if(b<0)
                cout<<"b intreg";
                else
                cout<<"b natural";
        else
            cout<<"b real";
        if((int)c==c)
                if(c<0)
                cout<<"c intreg";
                else
                cout<<"c natural";
        else
            cout<<"c real";

    return 0;
}
