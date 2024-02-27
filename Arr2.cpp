# include <iostream>
using namespace std;
int main()
{
    int n,k,j;
    cout<<"Enter Range:";
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter number you want to find:";
    cin>>k;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            j=i;
        }
    }
    cout<<j;
    return(-1);
}