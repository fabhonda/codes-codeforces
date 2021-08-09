#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
using namespace std;
lli mdc(lli a, lli b);
lli mdcLista(lli n, lli numberList[]);

int main(){
	lli n, type, max=0, people=0;
	cin >> n;
	lli swords[n];
	memset(swords,0,n);
	for(lli i=0;i<n;i++){
		cin >> type;
		swords[i] = type;
		if(type>max) max = type;
	}
	for(lli i=0;i<n;i++){
		swords[i] = max-swords[i];
	}	
	lli mdc = mdcLista(n,swords);
	//calcular o mdc do vetor
	for(lli i=0;i<n;i++){
		people += swords[i]/mdc;
	}	
	cout << people << " " << mdc << endl;
	return 0;
}

lli mdc(lli a, lli b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
//Calcula o MDC de uma lista de números
lli mdcLista(lli n, lli numberList[]){
    lli mdcResultado = numberList[0];
    lli i;
    for(i = 1; i < n; i++){
        mdcResultado = mdc(mdcResultado, numberList[i]);
    }
    return mdcResultado;
}
