#include<iostream>
#include<cmath>
#include<fstream>
#include<iomanip>
using namespace std;

void generet(int mas[200000000],int *e);
void zam(int mas[200000000],int *e);

int main()
{
    int n=1;
    cout<<"vvedit N de 1<=N<=200000000"<<endl<<"N=";
   cin>>n;
    if (n>=1&&n<=200000000)
    {
        int e=2;
        int *mas = new int [200000000];
        mas[0]=0;
        mas[1]=1;
        int i=3;
        while (i<=n)
        {
        generet(mas,&e);
        zam(mas,&e);
        i=(e+1);
        }
        cout<<mas[n-1]<<endl;
    }
    else
        cout <<"error";
    system("pause");
    return 0;
}

void generet(int mas[200000000],int *e)
{
    int i;
    for(i=*e;i<*e*2;i++)
    {

        mas[i]=mas[i-*e];
    }
    *e=i;
    return;
}
void zam(int mas[200000000],int *e)
{
    int i;
    for(i=*e/2;i<*e;i++)
    {
        if (mas[i]==0)
            mas[i]=1;
        else mas[i]=0;
    }
    return;
}
