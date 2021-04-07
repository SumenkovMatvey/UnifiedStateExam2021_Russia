#include <iostream>

using namespace std;
#define i(a, b) (!a || b)

int main() {
    for (int A = 0;; A++) {
        bool f = true;
        for (int x = 0; x < 1000; x++) {
            for (int y = 0; y < 1000; y++) {
                if (!(i((y * y < A), (y < 12)) && i((x <= 9), (x * x < A)))) {
                    f = false;
                }
            }
        }
        if (f) {
            cout << A;
            break;
        }
    }
    return 0;
}

