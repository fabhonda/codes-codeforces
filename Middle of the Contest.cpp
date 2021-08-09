#include <iostream>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int main(){
	
	int h1,m1,h2,m2,minuto=0,hora=0,media=0;
	char dp;
	
	cin >> h1 >> dp >> m1;
	cin >> h2 >> dp >> m2;
	
	if(m2>=m1){
		minuto = m2-m1;
	}
	else{
		minuto = 60-(m1-m2);
		hora--;
	}
	hora+=h2-h1;
	media = ((hora*60)+minuto)/2;
	hora = media/60;
	minuto = media%60;
	
	m1 = m1+minuto;
	if(m1>=60){
		m1 = m1-60;
		h1++;
	}
	h1 = h1 + hora;
	
	if(h1<10 & m1<10){
		cout << 0 << h1 << dp << 0 << m1;
	}
	else if(h1<10 & m1>=10){
		cout << 0 << h1 << dp << m1;
	}
	else if(h1>=10 & m1<10){
		cout << h1 << dp << 0 << m1;	
	}
	else{
		cout << h1 << dp << m1;
	}
	return 0;
}
