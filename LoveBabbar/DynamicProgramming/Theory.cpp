#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace chrono;

unsigned long long topdown(vector<unsigned long long> &dp, int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (dp[n]!= -1) return dp[n];

    dp[n] = topdown(dp, n - 1) + topdown(dp, n - 2);
    return dp[n];
}

unsigned long long bottomup(vector<unsigned long long> &dp, int n) {
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main() {
    int n;
    cin >> n;

    vector<unsigned long long> dp1(n + 1, -1);
    auto start1 = high_resolution_clock::now();
    auto result1 = bottomup(dp1, n);
    auto end1 = high_resolution_clock::now();
    cout << "Bottom-up: " << result1 << ", Time: " << duration_cast<milliseconds>(end1 - start1).count() << " ms" << endl;

    vector<unsigned long long> dp2(n + 1, -1);
    auto start2 = high_resolution_clock::now();
    auto result2 = topdown(dp2, n);
    auto end2 = high_resolution_clock::now();
    cout << "Top-down: " << result2 << ", Time: " << duration_cast<milliseconds>(end2 - start2).count() << " ms" << endl;

    return 0;
}



// #include <iostream>
// #include <vector>
// #include <chrono> // for timing

// using namespace std;
// using namespace chrono;

// int recurssion(int n) {
//     if (n == 0) return 0;
//     if (n == 1) return 1;
//     return recurssion(n - 1) + recurssion(n - 2);
// }

// int topdown(vector<int> &dp, int n) {
//     if (n == 0) return 0;
//     if (n == 1) return 1;
//     if (dp[n] != -1) return dp[n];

//     dp[n] = topdown(dp, n - 1) + topdown(dp, n - 2);
//     return dp[n];
// }

// int bottomup(vector<int> &dp, int n){
//     dp[0]=0;
//     dp[1]=1;

//     for(int i=2;i<=n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     return dp[n];
// }

// int main() {
//     int n;
//     cin >> n;
//       // Prepare dp for topdown
//     vector<int> dp(n + 1, -1);

//     // Measure recursion time
//     auto start1 = high_resolution_clock::now();
//     int recResult = bottomup(dp,n);
//     auto end1 = high_resolution_clock::now();
//     auto duration1 = duration_cast<milliseconds>(end1 - start1);
//     cout << "Bottomup: " << recResult << ", Time: " << duration1.count() << " ms" << endl;

  

//     // Measure topdown time
//     auto start2 = high_resolution_clock::now();
//     int topResult = topdown(dp, n);
//     auto end2 = high_resolution_clock::now();
//     auto duration2 = duration_cast<milliseconds>(end2 - start2);
//     cout << "Top-down result: " << topResult << ", Time: " << duration2.count() << " ms" << endl;

//     return 0;
// }
