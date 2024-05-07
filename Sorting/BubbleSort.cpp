// bubble sort me 2 loops hote hai bahar wala passess ko manage karta hai aur
// aandar wala each pass me check karta hai ki pahla wala element dusre se bara
// hai ki nhi agar hai toh swap karta hai;
// number of operations efficient me n*(n-1)/2 hota hai baaki me (n-1)ka square hota hai
// but dono hi cases me time complexity O(n*n) hi hota hai.
// har ek paas me nth largest element apne sahi gajah paaunch jata hai bhai.
// Worst case me n-1 passess lagte hai bro.
#include<iostream>
#include<vector>

using namespace std;
void BubbleSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)//efficient bana sakte hai.
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
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
    BubbleSort(a,n);
    cout<<"Array after sorting : ";
    for(int i=0; i<n;i++)
    {
        cout << a[i]<<" ";
    }

}