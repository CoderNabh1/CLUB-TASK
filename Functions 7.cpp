# include <iostream>
using namespace std;
void pythogorian(int a,int b,int c)
{
    if(c*c==a*a + b*b||b*b==a*a + c*c||a*a==b*b+c*c)
    {
        cout<<"These are Pythogorian Triplets.";
    }
    else
    {
        cout<<"These are not Pythogorian Triplets.";
    }
    return;
}

int main()
{
    int d,e,f;
    cout<<"Enter Numbers you want to chheck for:";
    cin>>d>>e>>f;
    pythogorian(d,e,f);
    return(0);
}