# include <iostream>
using namespace std;

void primenumbers(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        for(int j=2;j<=i;j++)
        {
            if (j%i==0)
            {
                break;
            }
            else
            {
                cout<<i<<endl;
            }
        }
    }
}

int main()
{
    int a,b;
    cout<<"enter range: ";
    cin>>a>>b;
    primenumbers(a,b);
    return(0);
}