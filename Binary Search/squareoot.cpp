#include <iostream>
using namespace std;
int squareroot(int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int number;
    cout << "Enter the number for square root" << endl;
    cin >> number;
    int ans = squareroot(number);
    cout << "Square root = " << ans << endl;

    // int precision;
    // cout<<"Kitne numbers dot ke bad"<<endl;
    // cin>>precision;

    // double finalans=ans;

    // double step=0.1;
    // for(int i=0;i<precision;i++){
    //     for(double j=finalans; j*j<=number;j=j+step){
    //         finalans=j;

    //     }
    //     step=step/10;
    // }
    // cout<<"final ans "<<finalans<<endl;

    return 0;
}