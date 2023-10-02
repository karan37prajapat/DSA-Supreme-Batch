#include <iostream>
#include<vector>
using namespace std;
int findpivot(vector<int> arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid] <arr[mid +1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
       
    mid=s+(e-s)/2;
    }
return s;
}
int main(){
    vector <int> ar{0,10,5,2};
    int piviot=findpivot(ar);
    cout<<"Index of Pivot Element is:"<<piviot<<endl;
    return 0;
}