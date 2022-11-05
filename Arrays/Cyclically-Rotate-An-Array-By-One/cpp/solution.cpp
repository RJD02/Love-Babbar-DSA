#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        solve(arr,n);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}
void solve(int arr[],int n)
{
    int temp = arr[n-1];
    //storing last digit/element
    for(int i=n-1;i>0;i--)
    {
        //reverse for loop
        arr[i] = arr[i-1];
    }
    arr[0]=temp;
}
