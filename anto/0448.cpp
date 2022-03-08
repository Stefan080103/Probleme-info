#include <stdio.h>
#include <stdlib.h>
#include <cstring>
//1. Scrieti un program care deschide un fisier ce contine mai multe randuri de text si afiseaza pe ecran doar randurile de ordin impar. Fisierul va fi inchis, la sfarsit
/*
int main()
{
    int n=0;
    char s[200];
    FILE *ftp;
    ftp=fopen("text.txt","r");
    while(!feof(ftp)){
        n++;
        fgets(s,200,ftp);
        if(n%2) printf("%s",s);
    }
    fclose(ftp);
    return 0;
}
*/
//2. Scrieti un program care deschide un fisier ce contine mai multe randuri de text si salveaza in alt fisier text randurile ce contin un numar par de vocale.
/*
int main(){
    int n=0,l,i;
    char s[200];
    FILE *ftp,*gtp;
    ftp=fopen("text.txt","r");
    gtp=fopen("afisare.txt","w");
    while(!feof(ftp)){
        n=0;
        fgets(s,200,ftp);
        l=strlen(s);
        for (i=0;i<l;i++)
            if(strchr("aeiouAEIOU",s[i])) n++;
        if(n%2==0) fprintf(gtp,"%s",s);
    }
    fclose(ftp);
    fclose(gtp);
    return 0;
}
*/
//5. Scrieti un program care preia un tablou de numere intregi dintr-un fisier text, separate printr-un spatiu, si salveaza acest tablou intr-un fisier binar.

int main(){
    int n=0,i;
    int v[200];
    FILE *ftp,*gtp;
    ftp=fopen("num.txt","r");
    while(!feof(ftp)){
        fscanf(ftp,"%d",v[++n]);
    }
    fclose(ftp);
    gtp=fopen("numere.bin","wb");
    for(i=1;i<=n;i++)
        fwrite(&v[i], sizeof(v[i]), 1, gtp);
    fclose(gtp);
    return 0;
}



