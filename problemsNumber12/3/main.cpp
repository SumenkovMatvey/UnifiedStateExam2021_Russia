#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define end string::npos
int main() {
    string s(2019,'1');
    s+=string(2019,'2');
    auto p2=s.find("222");
    auto p1=s.find("111");
    while(p2!=end){
        s.replace(p2,3,"1");
        p1=s.find("111");
        if(p1!=end)
            s.replace(p1,3,"2");
        p2=s.find("222");
    }
    cout<<s;
    return 0;
}

