#include<iostream>
using namespace std;
bool binary_2d(int arrr[][4],int row, int col,int target){
    int s=0;
    int total=row*col;
    int e=total-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        int rowi=mid/col;
        int coli=mid%col;
        int element=arrr[rowi][coli];
        if(element==target){
            cout<<"Found at Row index -"<<rowi<<"Found at column index "<<coli<<endl;
            return true;
        }
        else if(element>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    
 return false;
}
int main(){
    int arrr [5] [4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int row=5;
    int col=4;
    int target=20;
    bool ans=binary_2d(arrr,row, col, target);
   if(ans){
    cout<<"Found "<<endl;
   }
   else{
    cout<<"Not found"<<endl;
   }
    return 0;
}