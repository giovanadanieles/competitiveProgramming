#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, b, d, solve = 0, aux;
	long long int ac = 0;

	cin >> n >> b >> d;

	for(int i = 0; i < n; i++){
		cin >> aux;

		if(aux <= b){
			if(ac + aux > d){
				ac = 0;
				solve++;
			}
			else ac += aux;
		}
	}
	
	cout << solve << endl;

	return 0;
}