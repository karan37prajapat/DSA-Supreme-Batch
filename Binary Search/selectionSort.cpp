#include <iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> arr{2,4,3,7,8,1,5};

    for(int i=0;i<arr.size()-1;i++){
        int minIndex=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[minIndex]){
                minIndex =j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }


    for(auto value:arr){
        cout<<value<<" ";
    }
    return 0;
}

