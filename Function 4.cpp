# include <iostream>
using namespace std;
void factorial(int n)
{
    int factorial=1;
    for(int i=n;i>=1;i--)
    {
        factorial=factorial*i;  
    }
    cout<<factorial;
    return;
}

int main()
{
    int h;
    cout<<"Enter range for factorial:";
    cin>>h;
    factorial(h);
    return(0);
}