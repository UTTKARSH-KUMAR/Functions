#include<iostream>
using namespace std;

int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
return fact;
}
int nCr(int n,int r)
{
    int nume=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    int ans = nume/denom;
    return ans;
}
int main()
{
    int a , b;
    cout<<"enter the value of n and r respectively"<<endl;
    cin>>a>>b;
    cout<<"Answere is :"<<nCr(a,b);
    
}