#include<iostream>
using namespace std;

bool isPrime(int n)
{   
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        return 1;
    }
}
int main()
{
    int b;
    cin>>b;
    if(isPrime(b)==1)
    {
        cout<<"The no. is prime number";
    }
    else {cout<<"The no. is not a Prime number";}
}