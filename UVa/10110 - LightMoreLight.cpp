#include <bits/stdc++.h>
using namespace std;

// O(n_cases * 	sqrt(N)) version
// int nDiv(long long int num){
// 	int div = 0;

// 	for(long long int i = 1; i * i <= num; i++){
// 		if(num % i == 0){
// 			div += 1;

// 			if(i != num / i) div += 1;
// 		}
// 	}

// 	return div;
// }

// int main(int argc, char* const argv[]){
// 	long long int bulb;

// 	while(cin >> bulb && bulb != 0LL){
// 		if(nDiv(bulb) % 2 == 0) cout << "no" << endl;
// 		else cout << "yes" << endl;
// 	}

// 	return 0;
// }



// 1 << x == 2 ^ x
#define MAX (1LL << 32) - 1
unordered_set<long long int> perfectSqr;

void preprocess(){
	for(long long int i = 1; i * i <= MAX; i++){
		perfectSqr.insert(i * i);
	}
}

// O(sqrt(MAX) + n_cases)
int main(int agrc, char* const agrv[]){
	long long int bulb;

	preprocess();

	while(cin >> bulb && bulb != 0LL){
		if(perfectSqr.find(bulb) == perfectSqr.end()) cout << "no" << endl;
		else cout << "yes" << endl;
	}

	return 0;
}
