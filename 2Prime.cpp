#include <iostream>
#include<vector>
using namespace std;

int main() {
    // Write C++ code here
    vector<int>v;
    vector<int>::iterator itr;
    v.push_back(2);
    v.push_back(3);
    int a,b=0;
    cout<<"Enter a number : ";
    cin>>a;
    for(int i=4;i<=a;i++)
    {
        b=0;
        for(int j=2;j<=a;j++)
        {
            if(i%j==0)
                b++;
        }
        if(b==1)
        {
            v.push_back(i);
        }
    }
        for(itr=v.begin();itr!=v.end();itr++)
    {
        cout<<*itr<<" ";
    }
    

    return 0;
}