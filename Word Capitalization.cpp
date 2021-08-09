#include <iostream>
#include <cctype>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int main(){_
	
	string entrada;
	cin >> entrada;
	if(islower(entrada[0])){
		entrada[0] = toupper(entrada[0]);
	}
	cout << entrada;
	return 0;
}
