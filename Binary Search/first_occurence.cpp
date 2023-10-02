#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int firstOccurence(int arr[], int size, int target){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
         e=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOccurence(int arr[], int size, int target){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
         s=mid+1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
   int arr[]={1,2,3,4,5,5,5,5,5,5,5,5,5,5,5,5,5,5,7,8,9};
    int size=12;
    int target=5;
    int firstOcc=firstOccurence(arr,size,target);
    // auto ans=lower_bound(arr.begin(),arr.end(),target);

    // cout<<ans-arr.begin()<<endl;
    int lastOcc=lastOccurence(arr,size,target);
    cout<<"Total Occurence is :"<<lastOcc-firstOcc+1<<endl;
    // cout<<"Hello World"<<endl;

    // cout<<"first Occurence is : "<<firstOcc<<endl;
    return 0;
}