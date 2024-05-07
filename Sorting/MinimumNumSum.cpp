#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,firstminm=0,secndminm=0;
    cout<<"Enter the number of elements : ";
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end()); 
    for(int i=0;i<n;i++)
    {
      cout<<v.at(i)<<" ";
    }
    cout<<endl;
    for(int i=0;i< v.size();i++)
    {
        firstminm = (firstminm*10)+v[i]; 
    }
    while(1)
    {
        if(v[n-1]==v[n-2]){
            swap(v[n-3],v[n-2]);
            break;
        }
        else n--;
    }

    //cout<<firstminm;
    for(int i=0;i<n;i++)
    {
      cout<<v.at(i)<<" ";
    }


}