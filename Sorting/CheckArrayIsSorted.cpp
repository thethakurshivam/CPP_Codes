#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of Array :";
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    bool flag = true;
    for(int j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            flag = false;
            cout<<"Array is not sorted ";
            break;
        }
    }
    if(flag == true) cout<<"Array is sorted";
    

}