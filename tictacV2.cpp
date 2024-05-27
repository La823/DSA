#include <iostream>
using namespace std;

char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char player = 'X';

void draw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void input() {
    int a;
    cin >> a;
    if (a < 1 || a > 9 || matrix[(a - 1) / 3][(a - 1) % 3] == 'X' || matrix[(a - 1) / 3][(a - 1) % 3] == 'O') {
        cout << "Invalid input! Try again." << endl;
        input(); // Recursive call to input again
        return;
    }
    if (a == 1) { matrix[0][0] = player; }
    else if (a == 2) { matrix[0][1] = player; }
    else if (a == 3) { matrix[0][2] = player; }
    else if (a == 4) { matrix[1][0] = player; }
    else if (a == 5) { matrix[1][1] = player; }
    else if (a == 6) { matrix[1][2] = player; }
    else if (a == 7) { matrix[2][0] = player; }
    else if (a == 8) { matrix[2][1] = player; }
    else if (a == 9) { matrix[2][2] = player; }
}

void toggle() {
    if (player == 'X') { player = 'O'; }
    else { player = 'X'; }
}

char win() {
    for (int i = 0; i < 3; i++) {
        if (matrix[i][0] == matrix[i][1] && matrix[i][1] == matrix[i][2]) { return matrix[i][0]; } // Rows
        if (matrix[0][i] == matrix[1][i] && matrix[1][i] == matrix[2][i]) { return matrix[0][i]; } // Columns
    }
    if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2]) { return matrix[0][0]; } // Diagonal 1
    if (matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0]) { return matrix[0][2]; } // Diagonal 2
    
    // Check for draw
    bool isDraw = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] != 'X' && matrix[i][j] != 'O') {
                isDraw = false;
                break;
            }
        }
    }
    if (isDraw) { return 'D'; }

    return '/';
}



int main() {
    draw();
    char result;
    while (true) {
        input();
        draw();
        result = win();
        if (result == 'X' || result == 'O') {
            cout << "Player " << result << " wins!" << endl;
            break;
        } else if (result == 'D') {
            cout << "It's a draw!" << endl;
            break;
        }
        toggle();
    }
    return 0;
}
