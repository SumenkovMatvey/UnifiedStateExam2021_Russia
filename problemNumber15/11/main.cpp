#include <iostream>

using namespace std;
#define i(a, b) (!a || b)

int main() {
    int ans = 0;
    for (int A = 0; A < 500; A++) {
        bool f = true;
        for (int x = 0; x < 500; x++) {
            for (int y = 0; y < 500; y++) {
                if (!(i((x < 9), (x * x < A)) && i((y * y < A), (y <= 12)))) {
                    f = false;
                }
            }
        }
        if (f) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}

