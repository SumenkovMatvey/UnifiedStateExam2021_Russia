#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
#define end string::npos

int main() {
    string s(184, '5');
    auto p1 = s.find("333");
    auto p2 = s.find("555");
    while (p1 != end || p2 != end) {
        if (p2 != end) {
            s.replace(p2, 3, "3");
        } else if (p1 != end) {
            s.replace(p1, 3, "5");
        }
        p1 = s.find("333");
        p2 = s.find("555");
    }
    cout << s;
    return 0;
}

