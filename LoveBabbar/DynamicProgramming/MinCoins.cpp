#include <iostream>
#include <vector>

using namespace std;

// int recurssion(vector<int> &coins,int x){

//     //base case
//     if(x==0)return 0;
//     if(x<0)return INT_MAX;


//     int mini =INT_MAX;

//     for (int i=0; i<coins.size();i++){
// int ans = recurssion(coins,x-coins[i]);


// if(ans!=INT_MAX){
//     mini=min(mini, ans+1);
// }

//     }

// return mini;
// }



int solve(vector<int>& dp, vector<int>& coins, int x) {
    // Base case
    if (x == 0) return 0;
    if (x < 0) return INT_MAX;
    
    // If already computed, return cached result
    if (dp[x] != -1) return dp[x];
    
    int mini = INT_MAX;
    
    for (int i = 0; i < coins.size(); i++) {
        int result = solve(dp, coins, x - coins[i]);
        
        if (result != INT_MAX) {
            mini = min(mini, result + 1);
        }
    }
    
    // Store the result in dp array before returning
    dp[x] = mini;
    return mini;
}

int topdown(vector<int>& coins,int x){
    vector <int> dp (x+1,-1);

    return solve(dp,coins,x);
}



int main(){

    vector<int> coins ={3,5,7};
    cout<<topdown(coins,123);


}