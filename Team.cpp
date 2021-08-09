#include <iostream>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int main(){_
	
	int n,f,solve,questions=0;
	
	cin>>n;
	while(n--){
		solve=0;
		for(int i=0;i<3;i++){
			cin >> f;
			if(f==1){
				solve++;
			}
		}
		if(solve>=2){
			questions++;
		}
	}
	cout << questions << endl;
	return 0;
}
