#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve();
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
	//code
	return 0;
}

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=st.top();
        st.pop();
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
