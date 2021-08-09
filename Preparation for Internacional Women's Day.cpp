#include <iostream>
#include <vector>
#include <algorithm>
#define _ ios_base::sync_with_stdio(0);
#define mod 1000000007

using namespace std;

int main(){_
	
	int n,k,box;
	long long int candle;
	vector<long long int> boxes;
	vector<bool> use;
	
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> candle;
		boxes.push_back(candle);
		use.push_back(false);
	}
	box=0;
	for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(use[j]!=true & use[i]!=true){
					if(((boxes[i]+boxes[j])%mod)%k==0){
						//cout << boxes[i] << " " << boxes[j] << endl;
						box+=2;
						use[i] = true, use[j] = true;
					}
				}
			}			
	}
	cout << box << endl;
	return 0;
}
