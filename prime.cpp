#include<iostream>
using namespace std;
bool isprime(int n)
{
    int i=2;
    for(;i<n;i++)
        if(n%i==0)
            {
                break;
            }
    if(i==n)
        return true;
    else
        return false;
}

int main()
{
    int n,j=0;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    int a[n],p[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter element"<<i+1<<endl;
        cin>>a[i];
        if (isprime(a[i])==true)
        {
            p[j++]=a[i];
        }
    }
    if (j>0)
    {
        cout<<"prime numbers are"<<endl;
        for (int i = 0; i < j; i++)
        {
            cout<<p[i]<<',';
        }
        cout<<endl;
    }
    else
        cout<<"no prime numbers in the list"<<endl;
}