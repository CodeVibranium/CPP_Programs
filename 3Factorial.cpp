
#include <iostream>
using namespace std;
int main()
{
    int a;
    int ans=1;
    cout<<"Enter a number : ";
    cin>>a;
    for(int i=a;i>1;i--)
    {
        cout<<i<<endl;
        ans=ans*i;
    }
    cout<<ans;
}
 