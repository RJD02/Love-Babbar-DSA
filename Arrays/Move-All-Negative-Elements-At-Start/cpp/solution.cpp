#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n)
{
    stack<int> st;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            arr[cnt]=arr[i];
            cnt++;
        }
        else
        {
            st.push(arr[i]);
        }
    }
    while(!st.empty())
    {
        arr[n-1]=st.top();
        //cout<<arr[n-1]<<endl;
        st.pop();
        n--;
    }
}
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
            cout<<arr[i]<<" ";
        cout<<endl;
    }
}

