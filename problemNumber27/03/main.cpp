#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ans(string fileName){
	ifstream in(fileName);
	ll ans=999999999999;
	ll n;
	in>>n;
	vector<ll> s(3,999999999999);
	in>>s[0]>>s[1]>>s[2];
	for(ll i=0;i<n;i++){
		vector<ll>s1(3);
		in>>s1[0]>>s1[1]>>s1[2];
		vector<ll> cmb;
		for(auto a:s1){
			for(auto b:s){
				cmb.push_back(a+b);
			}
		}	
		s1=vector<ll>(123,999999999999);
		for(auto x:cmb){
			if(x!=0){
				s1[x%123]=min(s1[x%123],x);
			}
		}
		s=vector<ll>();
		for(auto x:s1){
			if(x!=0)s.push_back(x);
		}
	}
	for(auto x:s){
		if(x%123!=0&&x%2==0){
            ans=min(ans,x);
        }
	}
	in.close();
	return ans;
}



int main(){
	cout<<ans("27-A.txt")<<'\t'<<ans("27-B.txt")<<'\n';
	return 0;
}


