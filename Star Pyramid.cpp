#include <iostream>
using namespace std;

int main() {
    int i, space, rows, k = 0;
    rows = 5;
    for (i = 1; i <= rows; ++i, k = 0) {
        for (space = 1; space <= rows - i; ++space) {
            cout << "  ";
        }
        for (; k != 2 * i - 1;) {
            cout << "* ";
            ++k;
        }
        cout << '\n';
    }
    return 0;
}
