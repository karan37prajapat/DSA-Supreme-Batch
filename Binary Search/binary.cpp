#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool ifpoosible(vector<int>cooksRank ,int nP,int mid){
int currP = 0;//inital cooked pranta count
for(int i=0;i<cooksRank.size();i++){
    int R = cooksRank[i], j=1;
    int timeTaken = 0;
    while(true){
        if(timeTaken+j*R <=mid){
            ++currP;
            timeTaken += j*R;
            ++j;
        }
        else{
            break;
        }
    }
    if(currP >= nP){
        return true;
    }
}
return false;
}

int minTimeToComplete(vector<int>cooksRank,int nP){
    int start= 0;
    int highestRank = *max_element(cooksRank.begin(),cooksRank.end());
    int end = highestRank*(nP*(nP+1)/2);
    int ans= -1;

    while(start<=end){
        int mid= (start+end)>>1;
        if(ifpoosible(cooksRank,nP,mid)){
            ans= mid;
            end = mid-1;
        }
        else{
            start=mid+1;
        }
        // mid= (start+end)>>1;
    }
    return ans;
}

int main(){
 int T;cin>>T;
 while(T--){
    int nP, nC;
    cin>>nP>>nC;
    vector<int>cookRanks;
    while(nC--){
        int R;cin>>R;
        cookRanks.push_back(R);
    }
    cout<<minTimeToComplete(cookRanks,nP)<<endl;
 }
    return 0;
}