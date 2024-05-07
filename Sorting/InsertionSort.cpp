//insertion sort me 1st element ko sorted maan ke uske baad ek line draw kar dete hai 
// uske baad line ke right me jo bhi element hota hai usko check karte rahte hai ki
// wo sorted element se chota hai ki nhi agar chota hai toh uske left me swap kar dete hai.
// 5| 2 4 5 3 --> 2 5| 4 3 5 --> 2 4 5| 3 5 
// kuch iss tarike se hota hai kaam.
// worst case O(n^2) best case me O(n);                                     
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int a[5]={90,-1,3,6,5};
    int n=5;
    for(int i=0 ; i< n ;i++) cout<<a[i]<<" ";
    for(int i=1;i<n;i++)
    {
        int j=i;
        // while(j>=1)
        // {
        //     if(a[j]>a[j-1]) break;
        //     else swap(a[j],a[j-1]);
        //     j--;
        // }
        while(j>=1 && a[j]<a[j-1])
        {
            swap(a[j],a[j-1]);
            j--;
        }
    }
    cout<<endl;
    for(int i=0 ; i<n ;i++) cout<<a[i]<<" ";
}