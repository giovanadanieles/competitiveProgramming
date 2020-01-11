#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, x; 
	cin >> n >> x;

	char s;
	int qtt, kids = 0;

	for(int i = 0; i < n; i++){
		cin >> s >> qtt;

		switch(s){
			case '+':
				x += qtt;
			break;
			case '-':
				if(x - qtt < 0){
					kids++;
				}
				else x -= qtt;
			break;
		}
	}

	cout << x << " " << kids << endl;

	return 0;
}