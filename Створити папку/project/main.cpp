#include<iostream>

using namespace std;


int main()
{
    int n,kv,k;
    cout<<"vvedit N de 1<=N<=100"<<endl<<"N=";
    cin>>n;
    k=0;
    if (n>=1&&n<=100)
    {
    for(int i=2;;i++)
    {
        if (i!=2 && i!=3 &&i!=5)
        {
        if (i%2!=0&&i%3!=0&&i%5!=0)
        {
            k++;
        }
        }
        else k++;
        if(k==n)
        {
            kv=i;
            break;
        }
    }
    kv=kv*kv;
    cout <<"kv="<<kv;
    }
    else
        cout <<"error";
    return 0;
}
