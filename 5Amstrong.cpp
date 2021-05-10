#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    int number,itr=0,copiedNum , refNum,finalNum=0;
    cout<<"enter a number : ";
    cin>>number;
    copiedNum=number;
    //checks length of given number;
    while(number>0)
    {
        number=number%10;
        itr++;
    }
    cout<<itr;
    refNum=copiedNum;
    while(copiedNum>0)
    {
        copiedNum=copiedNum%10;
        number=(pow(copiedNum,itr));
        finalNum=finalNum+number;
    }
    cout<<refNum<<endl;
    cout<<finalNum;
}