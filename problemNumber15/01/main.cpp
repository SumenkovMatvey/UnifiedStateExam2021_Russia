#include <iostream>

using namespace std;
#define i(a, b) (!a || b)

int main() {
    for (int x = 10000; x > 0; --x) {
        if (i((50 < x * x), (50 > (x + 1) * (x + 1)))) {
            cout << x;
            break;
        }
    }
    return 0;
}

