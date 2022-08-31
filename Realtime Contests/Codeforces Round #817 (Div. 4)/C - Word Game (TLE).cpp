#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
	long long t, n, m;
	vector<string> words;
	string word;
	vector<long long> points;
	
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<3;i++) points.pb(0);
		for(int i=0;i<n*3;i++){
			cin >> word;
			words.pb(word);
		}
		
		int index=0, mark=0;
		for(int i=0;i<words.size();i++){
			mark++;
			int cont = count(words.begin(),words.end(),words[i]);
			if(cont == 1) points[index] += 3;
			else if(cont == 2) points[index] += 1;
			if(mark==n){
				index++;
				mark = 0;
			}
		}
		
		for(int i=0;i<points.size();i++){
			if(i!=points.size()-1) cout << points[i] << " ";
			else cout << points[i] << endl;
		}
		words.clear();
		points.clear();

	}
	
	return 0;
}
