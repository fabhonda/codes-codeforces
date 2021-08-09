#include <iostream>
#include <cctype>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	
	string text;
	vector<char> total;
	
	cin >> text;
	
	transform(text.begin(),text.end(),text.begin(),::tolower);
	
	for(int i=0;i<text.size();i++){
		//cout << text[i] << endl;
		if(text[i]=='a' | text[i]=='e' | text[i]=='i' | text[i]=='o' | text[i]=='u' | text[i]=='y'){
			text.erase(text.begin()+i);
			i--;
		}
	}
	
	int j=0;
	for(int i=0;i<text.size()*2;i++){
		if(i%2==0){
			total.push_back('.');
		}
		else{
			total.push_back(text[j]);
			j++;
		}
	}
	
	for(int i=0;i<total.size();i++){
		cout << total[i];
	}
	cout << endl;
	
	return 0;
}
