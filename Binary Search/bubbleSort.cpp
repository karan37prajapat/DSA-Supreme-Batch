#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{6,5,4,3,2,1};
    int n=arr.size();

    for(int round =1;round<n;round++){
        // bool swapped=false;
        int swapCount=0;
        for(int j=0;j< n-round;j++){
            if(arr[j]> arr[j+1]){
                // swapped=true;
                swapCount++;
                swap(arr[j],arr[j+1]);
            }
        }
        // if(swapped == false){
        //     break;
        // }
         cout<<swapCount<<endl;
    }
   
   
for(auto value:arr){
    cout<<value<<" ";
}
cout<<endl;
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";


}
return 0;
}