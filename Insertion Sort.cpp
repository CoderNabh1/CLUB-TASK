# include <iostrewam>
using namespace std;
int main()
{
    int n,extra;
    cout<<"Enter Range for Array:";
    cin>>n;
    int arr1[n];
    for(i=0;i<n;i++)
    {
        cin>>arr1[n];
    }
    for()
    {
        if(arr1[n]>arr1[n+1])
        {
            extra=arr1[n+1];
            arr1[n+1]=arr1[n];
            arr1[n]=extra;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr1[n];
    }
    return(0);
}