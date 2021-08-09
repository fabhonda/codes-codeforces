#include<bits/stdc++.h>
#define pb push_back
using namespace std;

long long n, v[12] = {15,12,10,9,8,7,6,5,4,3,2,1};
vector<long long> s;

int main(){
	cin >> n;
	int i=0;
	while(n>0){
		if(n-v[i]>=0){n-=v[i]; s.pb(i+1);}
		else i++;
		if(n==0) break;
	}
	cout << s.size() << endl;
	for(int i=0;i<s.size();i++){
		cout << s[i] << " ";
	}
	cout << endl;	
	return 0;
}
