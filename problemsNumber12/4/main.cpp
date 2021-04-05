#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
#define end string::npos

int main() {
    string s(1, '1');
    s += string(98, '9');
    auto p1 = s.find("19");
    auto p2 = s.find("299");
    auto p3 = s.find("3999");
    while (p1 != end || p2 != end || p3 != end) {
        p1 = s.find("19");
        if (p1 != end) {
            s.replace(p1, 2, "2");
        }
        p2 = s.find("299");
        if (p2 != end) {
            s.replace(p2, 3, "3");
        }
        p3 = s.find("3999");;
        if (p3 != end) {
            s.replace(p3, 4, "1");
        }
        p1 = s.find("19");
        p2 = s.find("299");
        p3 = s.find("3999");
    }
    cout << s;
    return 0;
}

