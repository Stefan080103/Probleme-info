#include <iostream>
#include <cstring>
using namespace std;
char oper[]="+-*/^";
struct Vector{
   char info[250][30];
   int nr;
}vec[256];
char expr[256],aux[256];
struct arbore{
    char inf[10];
    arbore * dr;
    arbore * stg;
};
int paranteze(){
   int ns=0,nd=0,l,i,p,ok=0,u;
   l=strlen(expr);
   for(i=0;i<l;i++){
       if(expr[i]=='(') ns++;
       if(expr[i]==')') nd++;
       if(ok==0 &&(expr[i]=='(' || expr[i]==')'))
            p=i,ok=1;
        if(expr[i]=='(' || expr[i]==')') u=i;
   }
   if(ns!=nd) return 0;
   if(expr[p]==')') return 0;
   if(expr[u]=='(') return 0;
   if(expr[0]==',' || expr[l-1]==',') return 0;
   for(i=1;i<l;i++){
        if(expr[i-1]=='('){
            if(expr[i]=='^' || expr[i]=='+' || expr[i]=='/' || expr[i]=='*' || expr[i]==')' || expr[i]==',')
                return 0;
            if(strchr(oper,expr[i-2])==0 && i>=2) return 0;
        }
        if(expr[i]==')'){
            if(expr[i-1]=='^' || expr[i-1]=='+' || expr[i-1]=='/' || expr[i-1]=='*' || expr[i-1]==')' || expr[i-1]==',' || expr[i-1]=='-' || expr[i-1]=='(' )
                return 0;
            if(strchr(oper,expr[i+1])==0 && i<l-1) return 0;
        }
   }
   return 1;
}
int operatori(){
    int i,l;
    l=strlen(expr);
    if(expr[0]=='+' || expr[0]=='*' || expr[0]=='/') return 0;
    if(expr[l-1]=='+' || expr[l-1]=='-' || expr[l-1]=='*' || expr[l-1]=='/') return 0;
    for(i=0;i<l-1;i++){
        if(expr[i]=='+')
            if(expr[i+1]=='+' || expr[i+1]=='/' || expr[i+1]=='*' || expr[i+1]=='-' || expr[i+1]=='^')
                return 0;
        if(expr[i]=='-')
            if(expr[i+1]=='+' || expr[i+1]=='/' || expr[i+1]=='*' || expr[i+1]=='-' || expr[i+1]=='^')
                return 0;
        if(expr[i]=='*')
            if(expr[i+1]=='+' || expr[i+1]=='/' || expr[i+1]=='*' || expr[i+1]=='-' || expr[i+1]=='^')
                return 0;
        if(expr[i]=='/')
            if(expr[i+1]=='+' || expr[i+1]=='/' || expr[i+1]=='*' || expr[i+1]=='-' || expr[i+1]=='^')
                return 0;
        if(expr[i]=='^')
            if(expr[i+1]=='+' || expr[i+1]=='/' || expr[i+1]=='*' || expr[i+1]=='-' || expr[i+1]=='^')
                return 0;
    }
    return 1;
}
int punctuatie(){
    int i,l,nr;
    l=strlen(expr);
    for(i=0;i<l;i++)
         if(strchr("*^/+-sclex",expr[i])==0)
            {
                nr=0;
                while(strchr("*^/+-sclex",expr[i])==0){
                    if(expr[i]=='.') nr++;
                    i++;
                }
                if(nr>1) return 0;
            }
        return 1;
}
int pro(char op)
{
    int prioritate=-1;
    switch(op)
    {
    case '(':
        prioritate = 0;
        break;
    case ')':
        prioritate=0;
        break;
    case '+':
        prioritate = 1;
        break;
    case '-':
        prioritate = 1;
        break;
    case '*':
        prioritate = 2;
        break;
    case '/':
        prioritate = 2;
        break;
    case '^':
        prioritate = 3;
        break;
    case 's':
        prioritate = 4;
        break;
    case 'c':
        prioritate = 4;
        break;
    case 'l':
        prioritate = 4;
        break;
    case'e':
            prioritate = 4;
        break;
    }

    return prioritate;
}
void Vectorizeaza()
{
    int i, k=1,nr;
    i=0;
    while (i<strlen(expr))
    {
        if (strchr("scle", expr[i])!=0)
        {
            if(expr[i]=='e') vec->info[k][0]=expr[i];
            else if(expr[i+1]=='n')
            {
                vec->info[k][0]=expr[i];
                i++;
                vec->info[k][1]=expr[i];

            }
            else

            {

                vec->info[k][0]=expr[i];
                i++;
                vec->info[k][1]=expr[i];
                i++;
                vec->info[k][2]=expr[i];
            }


        }
        else if (strchr("()+-*/^x",expr[i])!=0)
        {
            vec->info[k][0] = expr[i];
        }
        else
        {
            nr=0;
            while(strchr("()+-*/^sclex", expr[i])==0)
            {
                vec->info[k][nr]=expr[i];
                nr++;
                i++;
            }
            i--;

        }

        i++;
        k++;
    }
    k--;
    vec->nr=k;
    for(i=1;i<=k;i++)
        cout<<vec->info[i][0];
}
void insereaza(int p){
    int i;
    for(i=(vec->nr)+1;i>=p;i--){
        strcpy(vec->info[i],vec->info[i-1]);
    }
    vec->info[p][0]='*';
    vec->nr++;
}
void corecteaza(){
    int i;
    for(i=vec->nr;i>1;i--)
        if((vec->info[i][0]=='x' && strchr("0123456789",vec->info[i-1][0]))
        ||(vec->info[i-1][0]=='x' && strchr("0123456789",vec->info[i][0]))
        ||(vec->info[i-1][0]=='x' && strchr("scle",vec->info[i][0]))
        ||(vec->info[i][0]=='x' && vec->info[i-1][0]=='e')
        ||(strchr("scle",vec->info[i][0]) && strchr("0123456789",vec->info[i-1][0]))
        ||(strchr("(",vec->info[i][0]) && strchr("0123456789",vec->info[i-1][0]))
        ||(strchr("0123456789",vec->info[i][0]) && strchr(")",vec->info[i-1][0]))
        ||(strchr("()",vec->info[i][0]) && strchr("scle",vec->info[i-1][0]))
        ||(strchr("scle",vec->info[i][0]) && strchr("()",vec->info[i-1][0]))
        )
        insereaza(i);
}
void arborizeaza(arbore *&arb)
{
    int i,top1,top2;
    char Operator[50][5];
    arbore *Operand[50];
    i=1;
    top1 = 0;
    top2 = 1;
    Operator[top2][0]='(';
    while(i<=vec->nr && top2!=0)
    {
        i++;
        if(strchr("xe0123456789",vec->info[i][0])!=0)
        {
            top1++;
            arb = new arbore;
            strcpy(arb->inf,vec->info[i]);
            arb->stg=NULL;
            arb->dr=NULL;
            Operand[top1]=arb;
        }
        else if(vec->info[i][0]=='(')
        {
            top2++;
            Operator[top2][0]='(';
        }
        else
        {
            while(top2>0 && strchr("()",Operator[top2][0])==0 && pro(Operator[top2][0])>=pro(vec->info[i][0]))
            {

                if(strchr("scl",Operator[top2][0])!=0)
                {
                    arb = new arbore;
                    strcpy(arb->inf,Operator[top2]);
                    arb->stg=Operand[top1];
                    arb->dr=NULL;
                    Operand[top1]=arb;
                }
                else
                {
                    arb = new arbore;
                    strcpy(arb->inf,Operator[top2]);
                    arb->stg=Operand[top1-1];
                    arb->dr=Operand[top1];
                    Operand[top1-1]=arb;
                    top1--;
                }
                top2--;
            }
            if(top2>0)
                if ((Operator[top2][0] != '(') || (vec->info[i][0] != ')'))
                {
                    top2++;
                    strcpy(Operator[top2],vec->info[i]);
                }
                else top2--;

        }

    }

    if(i==vec->nr && top2==0)
    {
        arb=new arbore;
        arb=Operand[1];
    }
    else
    {
        arb=new arbore;
        strcpy(arb->inf, "greseala");
        arb->stg=NULL;
        arb->dr=NULL;

    }
}
void parcurgereInordine(arbore *arb)
{
    if(arb)
    {
        parcurgereInordine(arb->stg);
         cout<<arb->inf<<" ";
        parcurgereInordine(arb->dr);
    }
}
/*
void FormaPoloneazaInversa(arbore arb, char expr[256])
{
    char expr1[256], expr2[256], c[256];
    if(arb!=NULL)
    {
        FormaPoloneazaInversa(arb->stg, expr1);
        FormaPoloneazaInversa(arb->dr, expr2);
        strcat(expr, expr1);
        strcat(expr, " ");
        strcat(expr, expr2);
        strcat(expr, " ");
        //adaugam la expresie valoare lui arb->info

    }
    else
        cout<<expr;


}*/
void Deriveaza(arbore* arbi, arbore* &arb)
    {
        arbore *arb1, *arb2, *arb3, *arb4, *arb5, *arb6, *arb7;
        arb = new arbore;
        strcpy(arb->inf,"0");
        arb->stg=NULL;
        arb->dr=NULL;
        switch (arbi->inf[0])
        {
        case 'x':
            arb->inf[0]='1';
            break;
        case '+':
            Deriveaza(arbi->stg, arb3);
            arb->stg=arb3;
            Deriveaza(arbi->dr, arb4);
            arb->dr=arb4;
            arb->inf[0]='+';
            break;
        case '-':
            Deriveaza(arbi->stg, arb3);
            arb->stg=arb3;
            Deriveaza(arbi->dr, arb4);
            arb->dr=arb4;
            arb->inf[0]='+';
            break;
        case '*':
            arb1 = new arbore;
            arb2 = new arbore;
            Deriveaza(arbi->stg, arb3);
            Deriveaza(arbi->dr, arb4);
            arb->inf[0]='+';
            arb1->stg=arb3;
            arb1->dr=arbi->dr;
            arb1->inf[0]='*';
            arb2->stg=arbi->stg;
            arb2->dr=arb4;
            arb2->inf[0]='*';
            arb->stg=arb1;
            arb->dr=arb2;
            break;
        case '/':
            arb1= new arbore;
            arb= new arbore;
            arb5 = new arbore;
            Deriveaza(arbi->stg, arb3);
            Deriveaza(arbi->dr, arb4);
            arb1->inf[0]='*';
            arb1->stg=arbi->stg;
            arb1->dr= arb4;
            arb2->inf[0]='*';
            arb2->stg=arb3;
            arb2->dr=arbi->dr;
            arb5->inf[0]='-';
            arb5->stg=arb1;
            arb5->dr=arb2;
            arb6 = new arbore;
            arb7 = new arbore;
            arb6->inf[0]='2';
            arb6->stg=NULL;
            arb6->dr=NULL;
            arb7->inf[0]='^';
            arb7->stg= arbi->dr;
            arb7->dr=arb6;
            arb->inf[0]='/';
            arb->stg=arb5;
            arb->dr=arb7;
            break;
        case 's':
            arb1 = new arbore;
            strcpy(arb1->inf,"cos");
            arb1->stg=arbi->stg;
            arb1->dr=NULL;
            Deriveaza(arbi->stg, arb2);
            arb->inf[0]='*';
            arb->stg=arb1;
            arb->dr=arb2;
            break;
        case 'c':
            Deriveaza(arbi->stg, arb4);
            arb1 =  new arbore;
            arb2 = new arbore;
            arb3 =  new arbore;
            arb1->inf[0]='0';
            arb1->stg=NULL;
            arb1->dr=NULL;
            strcpy(arb2->inf,"sin");
            arb2->stg=arbi->stg;
            arb2->dr=NULL;
            arb3->inf[0]='*';
            arb3->stg=arb2;
            arb3->dr=arb4;
            arb->inf[0]='-';
            arb->stg=arb1;
            arb->dr=arb3;
            break;
        case 'l':
            Deriveaza(arbi->stg, arb1);
            arb->inf[0]='/';
            arb->stg=arb1;
            arb->dr=arbi->stg;
            break;
        case 'e':
            arb2= new arbore;
            strcpy(arb2->inf,arbi->inf);
            arb2->stg=arbi->stg;
            arb2->dr=arbi->dr;
            Deriveaza(arbi->stg, arb1);
            arb->inf[0]='*';
            arb->stg=arb2;
            arb->dr=arb1;
            break;
        case '^':
            Deriveaza(arbi->stg, arb1);
            arb5 = new arbore;
            arb2 = new arbore;
            arb5->inf[0]='1';
            arb5->stg=NULL;
            arb5->dr=NULL;
            arb2->inf[0]='-';
            arb2->stg=arbi->dr;
            arb2->dr=arb5;
            arb3= new arbore;
            arb3->inf[0]='^';
            arb3->stg=arbi->stg;
            arb3->dr=arb2;
            arb4 = new arbore;
            arb4->inf[0]='*';
            arb4->stg=arbi->dr;
            arb4->dr=arb3;
            arb->inf[0]='*';
            arb->stg=arb4;
            arb->dr=arb1;
            break;

        }
}
int main()
{
   int i;
   arbore *arb,*arb_d;
    cout<<"f(x)=";
    cin.get(expr, 250);
    strcpy(aux,expr);
    strcpy(expr,"(");
    strcpy(expr+1,aux);
    strcat(expr,")");
    Vectorizeaza();
    corecteaza();
    cout<<endl;
    for( i=0;i<=vec->nr;i++)
        cout<<vec->info[i];
   cout<<endl;
   if(operatori()==1 && paranteze()==1 && punctuatie()==1)
            cout<<"expresie corecta";
    else cout<<"incorecta";
    cout<<endl;
    arborizeaza(arb);
    parcurgereInordine(arb);
    Deriveaza(arb,arb_d);
    cout<<endl;
    parcurgereInordine(arb_d);
return 0;

}
