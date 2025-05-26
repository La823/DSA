#include <iostream>
using namespace std;

void home(int src, int des) {
    cout << src << endl;

    if (src == des) {
        cout << "Reached destination" << endl;
        return;
    }

    src++;
    home(src, des);
}

int main() {
    home(0, 10);
    return 0;
}
