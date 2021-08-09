#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<int> part;
	int n,k,a,kplace,advance=0;
	
	cin >> n >> k;
	
	for(int i=0;i<n;i++){
		cin >> a;
		part.push_back(a);
	}
	kplace = part[k-1];
	for(int i=0;i<n;i++){
		if(part[i] >= kplace & part[i]>0){
			advance++;
		}
	}
	
	cout << advance << endl;
	
	return 0;
}
