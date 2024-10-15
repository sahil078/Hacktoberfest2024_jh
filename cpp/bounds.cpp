#include <bits/stdc++.h>
using namespace std;

int findLowerBound(int arr[], int n, int target){
    int low=0,high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=target){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

int findUpperBound(int arr[], int n, int target){
    int ans=n;
    int low=0, high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>target){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}


int main()
{
    // int arr[7]={10,3,40,20,50,80,70};
    // int target;
    // cin>>target;
    // int ans = findLowerBound(arr,10,target);
    // if(ans==10){
    //     cout<<"Element doesn't exist";
    // }
    // else{
    //     cout<<ans;
    // }
    // int ans=findUpperBound(arr,10,target);
    // cout<<ans;

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(3);
    arr.push_back(40);
    arr.push_back(20);
    arr.push_back(50);
    arr.push_back(80);
    arr.push_back(70);
    auto ans=lower_bound(arr.begin(),arr.end(),40); 
    cout<<*ans<<endl;

    return 0;
}