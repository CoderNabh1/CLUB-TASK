/* In this programm we are taking a range from a user and then printing sum to it using loops*/
#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cout<<"Enter range:";
    cin>>n;
    sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=i+sum;
    }
    cout<<sum;
    return(0);
}