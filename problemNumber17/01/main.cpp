#include <iostream>

using namespace std;

int main() {
    int ans = 0;
    int m = 0;
    for (int i = 1016; i <= 7937; i++) {
        if (i % 3 == 0 && i % 7 != 0 && i % 17 != 0 && i % 19 != 0 && i % 27 != 0) {
            ans++;
            m = i;
        }
    }
    cout << ans << m;
    return 0;
}

