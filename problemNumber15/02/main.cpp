#include <iostream>

using namespace std;
#define i(a, b) (!a || b)

int main() {
    for (int x = 10000; x > 0; --x) {
        if (i((90 < x * x), (x<(x-1)))) {
            cout << x;
            break;
        }
    }
    return 0;
}

