#include <iostream>
using namespace std;

bool binary(int arr[], int s, int e, int key) {
    if (s > e) return false;

    int mid = s + (e - s) / 2;

    if (arr[mid] == key) return true;
    else if (arr[mid] < key)
        return binary(arr, mid + 1, e, key);
    else
        return binary(arr, s, mid - 1, key);
}

int main() {
    int arr[5] = {1, 2, 3, 5, 6};
    int key = 4;

    bool ans = binary(arr, 0, 4, key);
    cout << (ans ? "Found" : "Not found") << endl;

    return 0;
}
