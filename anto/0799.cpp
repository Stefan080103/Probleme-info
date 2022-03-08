#include <iostream>
#include <cstring>
using namespace std;
char expresie[250],oper[]="+-*/^";
/*
int paranteze(){
   int ns=0,nd=0,l,i,p,ok=0,u;
   l=strlen(expresie);
   for(i=0;i<l;i++){
       if(expresie[i]=='(') ns++;
       if(expresie[i]==')') nd++;
       if(ok==0 &&(expresie[i]=='(' || expresie[i]==')'))
            p=i,ok=1;
        if(expresie[i]=='(' || expresie[i]==')') u=i;
   }

   if(ns!=nd) return 0;
   if(expresie[p]==')') return 0;
   if(expresie[u]=='(') return 0;
   if(expresie[0]==',' || expresie[l-1]==',') return 0;
   for(i=1;i<l;i++){
        if(expresie[i-1]=='('){
            if(expresie[i]=='^' || expresie[i]=='+' || expresie[i]=='/' || expresie[i]=='*' || expresie[i]==')' || expresie[i]==',')
                return 0;
            if(strchr(oper,expresie[i-2])==0 && i>=2) return 0;
        }
        if(expresie[i]==')'){
            if(expresie[i-1]=='^' || expresie[i-1]=='+' || expresie[i-1]=='/' || expresie[i-1]=='*' || expresie[i-1]==')' || expresie[i-1]==',' || expresie[i-1]=='-' || expresie[i-1]=='(' )
                return 0;
            if(strchr(oper,expresie[i+1])==0 && i<l-1) return 0;
        }
   }
   return 1;
}
int operatori(){
    int i,l;
    l=strlen(expresie);
    if(expresie[0]=='+' || expresie[0]=='*' || expresie[0]=='/') return 0;
    if(expresie[l-1]=='+' || expresie[l-1]=='-' || expresie[l-1]=='*' || expresie[l-1]=='/') return 0;
    for(i=0;i<l-1;i++){
        if(expresie[i]=='+')
            if(expresie[i+1]=='+' || expresie[i+1]=='/' || expresie[i+1]=='*' || expresie[i+1]=='-' || expresie[i+1]=='^')
                return 0;
        if(expresie[i]=='-')
            if(expresie[i+1]=='+' || expresie[i+1]=='/' || expresie[i+1]=='*' || expresie[i+1]=='-' || expresie[i+1]=='^')
                return 0;
        if(expresie[i]=='*')
            if(expresie[i+1]=='+' || expresie[i+1]=='/' || expresie[i+1]=='*' || expresie[i+1]=='-' || expresie[i+1]=='^')
                return 0;
        if(expresie[i]=='/')
            if(expresie[i+1]=='+' || expresie[i+1]=='/' || expresie[i+1]=='*' || expresie[i+1]=='-' || expresie[i+1]=='^')
                return 0;
        if(expresie[i]=='^')
            if(expresie[i+1]=='+' || expresie[i+1]=='/' || expresie[i+1]=='*' || expresie[i+1]=='-' || expresie[i+1]=='^')
                return 0;
    }
    return 1;
}
*/
struct Vector{
   char info[250][30];
   int nr;
}vec[256];
char expr[256];
struct arbore{
    char inf[10];
    arbore * dr;
    arbore * stg;
};
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
    int i, j,k=1;
    i=0;
    while (i<strlen(expr))
    {

        if (strchr("scle", expr[i])!=0)
        {
            if(expr[i+1]=='n')
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
            while(strchr("()+-*/^scle", expr[i])==0)
            {
                vec->info[k][0] = expr[i];
                i++;
                k++;
            }

            i--;

        }

        i++;
        k++;
    }
    vec->nr=k;
    for(i=1;i<=k;i++)
        cout<<vec->info[i];
}
void arborizeaza( arbore *&arb)
{

    int i,top1,top2;
    int topmax=25;
    char Operator[25][5];
    arbore *Operand[25];
    i=0;
    top1 = 0;
    top2 = 1;
    strcpy(Operator[top2],"(");
    while(i<=vec->nr && top2!=0)
    {
        i++;
        if(strchr("x0123456789",vec->info[i][0])!=0)
        {
            top1++;
            arb = new arbore;
            strcpy(arb->inf,vec->info[i]);
            arb->stg=NULL;
            arb->dr=NULL;
            Operand[top1]=arb;
        }
        else if(strcmp(vec->info[i],"(")==0)
        {
            top2++;
            Operator[top2][0]='(';
        }
        else
        {
            while(top2>0 && strchr("()",Operator[top2][0])==0 && pro(Operator[top2][0])>=pro(vec->info[i][0]))
            {

                if(strchr("scle",Operator[top2][0])!=0)
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
                if ((Operator[top2][0] != '(') || (strcmp(vec->info[i],")")!=0))
                {
                    top2++;
                    strcpy(Operator[top2],vec->info[i]);
                }
                else top2--;

        }

        }

        if(i==strlen(expr) && top2==0)
        {
            arb=new arbore;
            arb=Operand[1];
        }
        else
        {
            arb=new arbore;
            strcpy(arb->inf,"0");
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
}/*
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


}
void Deriveaza(arbore arbi, arbore arb)
    {
        nod *arb1, *arb2, *arb3, *arb4, *arb5, *arb6, *arb7;
        arb = new nod;
        arb->info=0;
        arb->stg=NULL;
        arb->dr=NULL;
        switch (arb->info)
        {
        case 'x':
            arb->info='1';
            break;
        case '+':
            Deriveaza(arbi->stg, arb3);
            Deriveaza(arbi->dr, arb4);
            arb->info='+';
            break;
        case '-':
            Deriveaza(arbi->stg, arb3);
            Deriveaza(arbi->dr, arb4);
            arb->info='+';
            break;
        case '*':
            arb1 = new nod;
            arb2 = new nod;
            Deriveaza(arbi->stg, arb3);
            Deriveaza(arbi->dr, arb4);
            arb->info='+';
            arb1->stg=arb3;
            arb1->dr=arbi->dr;
            arb1->info='+';
            arb2->stg=arbi->stg;
            arb2->dr=arb4;
            arb2->info='*';
            arb->stg=arb1;
            arb->dr=arb2;
            break;
        case '/':
            arb1= new nod;
            arb= new nod;
            arb5 = new nod;
            Deriveaza(arbi->stg, arb3);
            Deriveaza(arbi->dr, arb4);
            arb1->info='*';
            arb1->stg=arbi->stg;
            arb1->dr= arb4;
            arb2->info='*';
            arb2->stg=arb3;
            arb2->dr=arbi->dr;
            arb5->info='-';
            arb5->stg=arb1;
            arb5->dr=arb2;
            arb6 = new nod;
            arb7 = new nod;
            arb6->info='2';
            arb6->stg=NULL;
            arb6->dr=NULL;
            arb7->info='^';
            arb7->stg= arbi->dr;
            arb7->dr=arb6;
            arb->info='/';
            arb->stg=arb5;
            arb->dr=arb7;
            break;
        case 's':
            arb1 = new nod;
            arb1->info='cos';
            arb1->stg=arbi->stg;
            arb1->dr=NULL;
            Deriveaza(arbi->stg, arb2);
            arb->info='*';
            arb->stg=arb1;
            arb->dr=arb2;
            break;
        case 'c':
            Deriveaza(arbi->stg, arb4);
            arb1 =  new nod;
            arb2 = new nod;
            arb3 =  new nod;
            arb1->info='0';
            arb1->stg=NULL;
            arb1->dr=NULL;
            arb2->info='sin';
            arb2->stg=arbi->stg;
            arb2->dr=NULL;
            arb3->info='*';
            arb3->stg=arb2;
            arb3->dr=arb4;
            arb->info='-';
            arb->stg=arb1;
            arb->dr=arb3;
        case 'l':
            Deriveaza(arbi->stg, arb1);
            arb->info='/';
            arb->stg=arb1;
            arb->dr=arb1->stg;
            break;
        case 'e':
            arb2= new nod;
            arb2->info=arbi->info;
            arb2->stg=arbi->stg;
            arb2->dr=arbi->dr;
            Deriveaza(arbi->stg, arb1);
            arb->info='*';
            arb->stg=arb2;
            arb->dr=arb1;
            break;
        case '^':
            Deriveaza(arbi->stg, arb1);
            arb5 = new nod;
            arb2 = new nod;
            arb5->info='1';
            arb5->stg=NULL;
            arb5->dr=NULL;
            arb2->info='-';
            arb2->stg=arbi->dr;
            arb2->dr=arb5;
            arb3= new nod;
            arb3->info='^';
            arb3->stg=arbi->stg;
            arb3->dr=arb2;
            arb4 = new nod;
            arb4->info='*';
            arb4->stg=arbi->dr;
            arb4->dr=arb3;
            arb->info='*';
            arb->stg=arb4;
            arb->dr=arb1;
            break;

        }
}*/
int main()
{
   arbore *arb;
    cout<<"f(x)=";
    cin.get(expr, 250);
    Vectorizeaza();
    arborizeaza(arb);
    parcurgereInordine(arb);

return 0;

}
