# include <iostream>
using namespace std;
void print(int a)
{
    cout<<a<<endl;
} 
int add(int b,int c)
{
    print(b);
    print(c);
    int f=b+c;
    return(f);
}
int main()
{
    int t,y;
    cout<<"Enter value:";
    cin>>t>>y;
    cout<<add(t,y)<<endl;
    return(0);
}