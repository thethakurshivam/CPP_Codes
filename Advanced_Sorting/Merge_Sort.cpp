#include<iostream>
#include<vector>
using namespace std;
void Merge(vector<int>& a,vector<int>& b,vector<int>& res)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size()&& j<b.size())
    {
        if(a[i]<b[j]) res[k++]=a[i++];
        else res[k++] = b[j++];
    }
    if(i==a.size())
    {
        while(j<b.size()) res[k++]=b[j++];
    }
    else {
        while(i<a.size()) res[k++]=a[i++];
    }
    return ;
}
void MergeSort(vector<int>& v)
{
    int n = v.size();
    if(n==1) return ;
    int n1=n/2, n2= n - n/2;
    vector<int> a(n1),b(n2);
    // Copy paste elements
    for(int i=0;i<n1;i++) a[i]=v[i];
    for(int i=0;i<n2;i++) b[i]=v[i+n1];
    // magic happens
    MergeSort(a);
    MergeSort(b);
    Merge(a,b,v);
    a.clear();
    b.clear();
    return ;
}
int main()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
    MergeSort(v);
    cout<<endl;
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
}
