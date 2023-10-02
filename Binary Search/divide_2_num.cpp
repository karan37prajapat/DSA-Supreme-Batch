#include<iostream>
using namespace std;
int findquotient(int divd, int divs){
   
    int s=0;
    int e=abs(divd-1);
    int mid=s+(e-s)/2;
    int ans;
    while(s <= e){
         if(divd==1 && divs==1){
        ans=1;
        return ans;
    }
        if(abs(mid*divs)==abs(divd)){
            ans= mid;
            break;
        }
        else if(abs(mid*divs)>abs(divd)){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
            
        }
        mid=s+(e-s)/2;
    }
    if((divd<0 && divs<0) || (divd>0 && divs>0)){
        return ans;
    }
    else{
        return -ans;
    }
    
}
int main(){

    int dividend=1;
    int divisor=1;
  
    int quotient=findquotient(dividend,divisor);
    cout<<endl;
    cout<<"The quotient is: "<<quotient<<endl;
    cout<<endl;
    
    // int precision;
    // cout<<"Kitne numbers dot ke bad"<<endl;
    // cin>>precision;

    // double finalans=quotient;

    // double step=0.1;
    // for(int i=0;i<precision;i++){
    //     for(double j=finalans; j*divisor<=dividend;j=j+step){
    //         finalans=j;

    //     }
    //     step=step/10;
    // }
    // cout<<"final ans "<<finalans<<endl;

    return 0;
}