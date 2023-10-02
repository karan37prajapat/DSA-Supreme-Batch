#include<iostream>
using namespace std;
int firstrepeat(int arr[],int n){
  int ans;
   for(int i=0;i<n;i++){
   
        bool isRepeated=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
              return i;
                
            }
        }
    }
    return -1;
}

// int newfirst(int arr[],int n){
//     int ans;
//     for(int i=0;i<n;i++){
//        ans=arr[i];
//     }
// }
// int newfirst(int arr[],int n){
//     unordered_map<int ,int>hash;
// }

int main(){
    int arr[]={1,5,3,4,3,5,6};
    int n=7;
   
//   cout<<"Repeating element is: "<<firstrepeat(arr,n)<<endl;
for(int i=)
    
    return 0;
}