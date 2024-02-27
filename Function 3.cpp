# include <iostream>
using namespace std;

void fibonacii(int a)
{
    int b=0;
    int c=1;
    int nextterm;
    for(int i=0;i<=a;i++)
    {
        cout<<b<<endl;
       nextterm=b+c;
       b=c;
       c=nextterm; 
    }
    return;
}
int main()
{
    int f;
    cout<<"Enter range:";
    cin>>f;
    fibonacii(f);
    return(0);
}