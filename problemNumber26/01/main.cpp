#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main() {
    ifstream in("26.txt");
    int n;
    in >> n;
    vector<int> a(n);
    for (auto &x:a) {
        in >> x;
    }
    sort(a.begin(), a.end());
    reverse(a.begin(),a.end());
    int h = n-1;
    int ans1 = 0, ans2 = 0;
    ull sum1 = 0, sum2 = 0;
    for (int i = 0; i <= h; i++) {
        sum1+=a[i];
        if(i!=h) {
            ans1++;
        }
        for(int j=h;sum2<=sum1;j--){
            if(sum2+a[j]<sum1) {
                sum2 += a[j];
                h--;
                ans2++;
            }else{
                break;
            }
        }
    }
    cout<<ans1<<' '<<ans2;
}
