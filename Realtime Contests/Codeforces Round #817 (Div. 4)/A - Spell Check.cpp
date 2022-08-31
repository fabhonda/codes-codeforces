#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	string s, base = "Timur";	
	
	cin >> t;
	
	while(t--){
		cin >> n >> s;
		bool found = false;
		if(s.size()!=n || s.size() !=5) cout << "NO" << endl;
		else{
			sort(s.begin(),s.end());
			sort(base.begin(),base.end());
			if(base == s) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	
	return 0;
}
