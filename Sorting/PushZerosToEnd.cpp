// Push all the zeros in an array while maintaining thebrelative order of the other elements
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n],count=0,insert=n;
    cout<<"Enter the Array : ";
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j = 0;j<n;j++)
    {
        // maintaining the relative order of the other elements.
        if(a[j]!=0) 
        {
            a[count] = a[j];
            count++;
        }
    }
    // for(int i=count;i<n;i++) a[i]=0;//inserting zeros in the last
    cout<<"Resultant Array : ";
    for(int l=0;l<n;l++) cout<<a[l]<<" ";//printing the array

}

