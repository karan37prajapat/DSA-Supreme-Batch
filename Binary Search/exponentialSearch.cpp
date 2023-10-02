#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int bs(int a[],int start,int end,int x){

    int mid = (start+end)/2;
    while(start<= end){
        if(a[mid] == x) return mid;
        else if(a[mid]> x) end=mid-1;
        else start=mid+1; 
        mid = (start+end)/2;
    }
    return -1;
}

int expSearch(int a[],int n,int x){
    if(a[0] ==x) return 0;

    int i=1;
    while(i<n && a[i]<= x){
        i*=2;
    }
    return bs(a,i/2,min(i,n-1),x);
}
int expSearch2(int a[],int n,int k){
    int i=0;
    int j=1;
    while(a[j]<k){
        i=j;
        j*=2;
    }
    return bs(a,i,min(j,n-1),k);
}

int main(){
    int a[]= {3,4,5,6,11,13,14,15,56,70};
    int n = sizeof(a)/sizeof(int);
    int x =70;
    int ans = expSearch2(a,n,x);

    cout<<ans<<endl;

return 0;
}
