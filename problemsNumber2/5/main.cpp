#include <iostream>

using namespace std;
#define fo(i) for(i=0;i<2;++i)
#define i(a, b) (!a || b)

int main() {
    int x, y, z, w;
    fo(x) {
        fo(y) {
            fo(z) {
                fo(w) {
                    if ((!x && y && z && !w) || (!x && y && !z && !w) || (x && y && z && !w)) {
                        cout << x << ' ' << y << ' ' << z << ' ' << w << '\n';
                    }
                }
            }

        }
    }
    return 0;
}
