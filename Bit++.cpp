#include <iostream>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int main(){_
	
	int n,x=0;
	string operation;
	
	cin >> n;
	while(n--){
		cin >> operation;
		if(operation[1]=='+'){
			x++;
		}
		else if(operation[1]=='-'){
			x--;
		}
	}
	cout << x << endl;
	return 0;
}
