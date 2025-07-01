#include <iostream>
#include <vector>
#include <chrono>

using namespace std;



int solveup(long long stairs,int  i){
    //base case
    if (i<0)return 0;
    if(i==0)return 1;

    return (solveup(stairs,i-1)+solveup(stairs,i-2));
}




int solvedown(int stairs, int i) {
    if (i > stairs) return 0;    // overshot
    if (i == stairs) return 1;   // reached target
    return solvedown(stairs, i + 1) +solvedown(stairs, i + 2);
}



int solve (vector<int> &dp,vector <int>&cost,int n){
    //base case
    if(n==0)return cost[0];
    if(n==1)return cost[1];

    if(dp[n]!=-1)return dp[n];

dp[n] = min(solve(dp,cost,n-1),solve(dp,cost,n-2))+cost[n];

return dp[n];

};


int topdown(vector<int> &dp,vector <int>&cost,int n){

return min(solve(dp,cost,n-1),solve(dp,cost,n-2));

}


int main(){

    vector<int> cost = {5,10,15,20,12,10};
    int n =cost.size();
    vector <int> dp(n+1,-1);

cout<<topdown(dp,cost,n);

}