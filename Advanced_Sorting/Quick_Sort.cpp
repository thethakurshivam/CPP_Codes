#include<iostream>
#include<vector>
using namespace std;
int partition(int arr[],int si,int ei)
{
    int count=0;
    int pivotIdx = 0;
    int pivotElement = arr[si];
    for(int i=si+1;i<=ei;i++)
    {
        if(arr[i]<=pivotElement) count++;
    }
    pivotIdx = count + si;
    swap(arr[si],arr[pivotIdx]);
    int i = si;
    int j = ei;
    while(i<pivotIdx && j>pivotIdx)
    {
        if(arr[i]<=pivotElement) i++;
        if (arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void Quick_Sort(int arr[],int si,int ei)
{
    if(si>=ei) return;
    int pi = partition(arr,si,ei);// pivot element calculate karega ye function
    Quick_Sort(arr,si,pi-1);
    Quick_Sort(arr,pi+1,ei);
    return;
}
int main()
{
    int arr[]={5,6,1,3,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    Quick_Sort(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
