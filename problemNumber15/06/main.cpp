#include <iostream>

using namespace std;
#define i(a, b) (!a || b)

int main() {
    for (int A = 1000; A > 0; A--) {
        bool f = true;
        for (int x = 0; x < 1000; x++) {
            for (int y = 0; y < 1000; y++) {
                if (!(i((x <= 6), (x * x <= A)) && i((y * y < A), (y <= 7)))) {
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

