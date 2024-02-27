# include <iostream>
using namespace std;

void sum(int n)
{
    int a=0;
    for(int i=1;i<=n;i++)
    {
        a=i+a;
    }
    cout<<a;
    return;
}
int main()
{
    int b;
    cout<<"Enter range:";
    cin>>b;
    sum(b);
    return(0);
}