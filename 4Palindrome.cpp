#include<iostream>
using namespace std;
int main()
{
    int number ,finalNumber,temp,calNum=0;

    cout<<"Program to check whether a given no is pallindrome or not."<<endl;
    cout<<"Enter a Number : ";
    cin>>number;
    finalNumber=number;
    while(number>0)
    {
        temp=number%10;
        calNum=(calNum*10)+temp;
        number=number/10;
    }
    if(finalNumber==calNum)
        cout<<finalNumber<<"  is a pallindrome ";
    else
        cout<<finalNumber<<" is not a pallindrome";
    return 0;
   


}