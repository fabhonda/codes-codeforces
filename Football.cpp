#include <bits/stdc++.h>

using namespace std;

int main(){
	string sit;
	char actual;
	int count=1, dangerous=0;
	cin >> sit;
	actual = sit[0];
	for(int i=1;i<sit.size();i++){
		if(sit[i]!=actual){count=1;actual = sit[i];}
		else count++;
		if(count==7){dangerous=1;break;}
	}
	if(dangerous) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
