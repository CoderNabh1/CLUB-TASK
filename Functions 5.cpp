# include <iostream>
using namespace std;
int factorial(int n)
{
    int nextterm=1;
    for(int i=n;i>=1;i--)
    {
        nextterm=nextterm*i;
    }
    return(nextterm);
}
int main()
{
    int s,j,z;
    cout<<"Enter value for n and r:";
    cin>>s>>j;
    z=factorial(s)/(factorial(j)*factorial(s-j));
    cout<<z<<endl;
    return(0);
}