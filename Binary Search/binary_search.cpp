#include <iostream>
#include<algorithm>
using namespace std;
int findtarget(int arr[], int size,int target)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans=-1;
    while (s <= e)
    {
        

        if (arr[mid] == target)
        {
            ans=mid;
           e=mid-1;
            // ans++;
        }
        else if (arr[mid]>target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int n=6;

    // cout << "enter you target no. to find:-" << endl;
    // cin >> n;

    int arr[] = {1,2,3,6, 6, 6, 6, 19};
    
    int size = 8;
    // int ans=findtarget(arr,size,n);
    // cout<<ans<<endl;
    // upper_bound(arr,arr+size,n);

    // if(binary_search (arr,arr+size,n)){
    //     cout<<"found"<<endl;
    // }
    // else{
    //     cout<<"not found"<<endl;
    // }
   
    
    int indexof = findtarget(arr, size, n);
    if (indexof == -1)
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << " found at :-" << indexof << endl;
    }

    return 0;
}