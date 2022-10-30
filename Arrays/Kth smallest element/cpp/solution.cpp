#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
int arr[t];
for(int i=0;i<t;i++)
{
    cin>>arr[i];
}
int k;
cin>>k;
sort(arr,arr+t);
//for(int i=0;i<t;i++)
//{
//    cout<<arr[i]<<" ";
//}
cout<<endl;
cout<<arr[k-1]<<endl;
    return 0;
}
