#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
	int n, can, shots=0;
	vector<int> cans, original;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> can;
		cans.pb(can);
	}
	original = cans;
	sort(cans.begin(),cans.end());
	reverse(cans.begin(),cans.end());
	for(int i=0;i<cans.size();i++){
		shots+=((cans[i]*i)+1);
	}
	cout << shots << endl;
	for(int i=0;i<cans.size();i++){
		vector<int>::iterator it = find(original.begin(),original.end(),cans[i]);
		int pos = distance(original.begin(),it);
		if(i!=cans.size()-1) cout << pos+1 << " ";
		else cout << pos+1 << endl;
		original[pos] = -1;
	}
	return 0;
}
