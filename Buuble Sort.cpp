# include <iostream>
using namespace std;
int main()
{
    int n;
    int arr1[n];
    int extra=0;
    cout<<"Enter range of Array:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }

    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(arr1[i]>arr1[i+1])
            {
                extra=arr1[i];
                arr1[i]=arr1[i+1];
                arr1[i+1]=extra;
            }
        }
        counter++;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<endl;
    }
    return(0);
}