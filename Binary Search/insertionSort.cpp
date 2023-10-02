#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr{18,2,5,3,1,8,9};
    int n=arr.size();

    int arrr[]={1,3,72,4,2,8,6,0};
    int size=8;
    // for(int round=1;round<n;round++){
    //     //step 1=fetch
    //     int val=arr[round];
    //     int j=round-1;

    //     for(;j>=0;j--){
    //         if(arr[j]>val){
    //             arr[j+1]=arr[j];
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     //step 4= copy
    //     arr[j+1]=val;
    

   
    // }

    sort(arr.begin(),arr.end());

    sort(arrr,arrr+size);



     for(auto value:arrr){
        cout<<value<<" ";
    }
    return 0;
}