#include <bits/stdc++.h>
using namespace std;

int sum(int *arr,int size,int smaxy){
    if(size==0){
        return smaxy;
    }
    else{
        smaxy=smaxy+arr[0];
        return sum(arr+1,size-1,smaxy);
    }
}

int main()
{
    int n;
    cout<<"Enter n"<<endl;cin>>n;
    int arr[n];
    cout<<"Enter elements in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int smaxy=0;
    cout<<"The sum of the elements of the above array is "<<sum(arr,n,smaxy);
    return 0;
}
