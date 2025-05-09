#include <iostream>
#include <cmath> // Needed for pow()
using namespace std;

string powerOf2(int n) {
    for (int i = 0; i <= 30; i++) {  // Loop up to 2^30 (since 2^31 exceeds int limit)
        if (n == pow(2, i)) {
            return "true";
        }
    }
    return "false";
}

int main() {
    cout << powerOf2(4);  // Output: 1 (true)
    return 0;
}
