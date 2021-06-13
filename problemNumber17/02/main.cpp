#include <iostream>

using namespace std;

int main() {
    int ans = 0;
    int m = 0;
    for (int i = 1200; i <= 11200; i++) {
        if (i % 5 == 0 && i % 7 != 0 && i % 13 != 0 && i % 19 != 0 && i % 17 != 0) {
            ans++;
            if (m == 0) {
                m = i;
            }
        }
    }
    cout << ans << m;
    return 0;
}

