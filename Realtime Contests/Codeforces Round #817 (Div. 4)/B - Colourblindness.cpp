#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	string row1, row2;
	cin >> t;
	
	while(t--){
		cin >> n;
		bool equal = true;
		cin >> row1 >> row2;
		for(int i=0;i<n;i++){
			if(row1[i] == 'R' && row2[i] == 'G') equal = false;
			if(row1[i] == 'R' && row2[i] == 'B') equal = false;
			if(row2[i] == 'R' && row1[i] == 'B') equal = false;
			if(row2[i] == 'R' && row1[i] == 'G') equal = false;
		}
		if(equal) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}
