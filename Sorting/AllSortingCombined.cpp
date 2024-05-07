// Sab samajh me aa rah ahi but dikkat yahi hai ki samajh me nhi aata hai ki 
// kaunsa loop kah se kah tak chalega.
// Bubble sort k liye i jo hai wo zero se n-1 tak chalega aur j 0 se n-1-i tak;
// Selection sort k liye i jo hai wo 0 se n-1 tak aur j=i se j<n tak;


#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void Display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

void BubbleSort(vector<int> &v)
{
    bool flag=false;
    for(int i=0;i<v.size()-1;i++)
    {
        flag = false;
        for(int j=0;j<v.size()-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                flag = true;
            }
        }
        if(flag==false) return;
    }
}

void SelectionSort(vector<int> &v)
{
    for(int i=0;i<v.size()-1;i++)
    {
        int min=INT_MAX;
        int mindex=-1;
        for(int j=i;j<v.size();j++)
        {
            if(min>v[j])
            {
                mindex=j;
                min=v[j];
            }
        }
        swap(v[mindex],v[i]);
    }
}
int main()
{
    int arr[]={7,0,0,2,3,1,-100};
    int n= sizeof(arr)/sizeof(arr[0]);
    vector <int>v(arr,arr+n);
    //SelectionSort(v);
    BubbleSort(v);
    Display(v);
}

