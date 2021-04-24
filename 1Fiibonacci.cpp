#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>fib;
    int a=0,b=1,c;
    cout<<"Enter how many fibonacci numbers are required : ";
    cin>>c;

    cout<<"Fibonacci Series : "<<endl;
    cout<<a<<" "<<b<< " "<<endl;
    for(int i=0;i<c;i++)
    {
        int d=a+b;
        // cout<<d<<" ";
        a=b;
        b=d;
        // fib.push_back(a);
        fib.push_back(b);
    }
    vector<int>::iterator itr;
    for(itr=fib.begin();itr!=fib.end();itr++)
    {
        // cout<<endl;
        cout<<*itr<<endl;
    }
}