# include <iostream>
# include <climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Range:";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for (int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    int max1=INT_MIN;
    int min1=INT_MAX;
    for(int i=0;i<n;i++)
    {
       max1=max(max1,array[i]);
       min1=min(min1,array[i]);
    }
    cout<<max1<<endl;
    cout<<min1<<endl;
    return(0);
}