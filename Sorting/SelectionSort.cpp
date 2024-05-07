// Selection sort pahle nth minimum element find karta hai phir usko 
// nth first position se swap kar dete hai.
// Isko humlog jada efficient nhi bana sakte hai bhai jaise humne bubblesort
// me flag istemal kiya tha aur n-1-i bhi likha tha is me swapping bahut kam hota 
// hai as compaired to buble sort algorithm. O(n^2) hi hai.
// usecase swapping kaam hota hai. starting se k minimum element nikalna hai toh nikal sakte hai
// if size of array is small hai taab karte hai use isko
// Mistake kar rha hai j=i se start hoga bhai aur loop ka dhyan rah please.
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int a[]={-90,4,-700,3,70};
    int n = 5;
    for(int ele : a) cout<<ele <<" ";
    //Ye naya wala foor each loop hai ek line me kaam tamam kar deta hai bhai
    for(int i=0;i<n-1;i++)//main loop hai swapping manage karta hai
    {
        int min=INT_MAX,mindex=-1;
        // aandar wala minimum element nikalta hai.
        // orange dabba i control kar rah hai.
        for(int j=i;j<n;j++)
        {
            if(a[j] < min)
            {
                min = a[j];
                mindex = j;
            }
        }
        swap(a[i],a[mindex]);//j aur mindex ka swapping karta hai
    }
    cout<<endl;
    for(int ele : a) cout<<ele <<" ";
}