#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	deque<int> d;
	int se = 0, di = 0, aux, flag;

	for(int i = 0; i < n; i++){
		cin >> aux;
		d.push_back(aux);
	}

	while(d.size() > 1){
		flag = 0;
		if(d.front() > d.back()) flag = 1;

		if(flag == 0){
			se += d.back();
			d.pop_back();	
		} 
		else{
			se += d.front();
			d.pop_front();
		}

		flag = 0;
		if(d.front() > d.back()) flag = 1;

		if(flag == 0){
			di += d.back();
			d.pop_back();	
		} 
		else{
			di += d.front();
			d.pop_front();
		}		
	}

	if(d.size() == 1){
		se += d.back();
		d.pop_back();
	}

	cout << se << " " << di << endl;

	return 0;
}

/*------------------------------------------------------------------------*/
// two years later:


// Memory complexity: O(1)
//   Time complexity: O(N)

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int nCards, aux, serejaP = 0, dimaP = 0;
	vector<int> cards;

	cin >> nCards;

	for(int i = 0; i < nCards; i++){
		cin >> aux;
		cards.push_back(aux);
	}

	aux = 1;
	for(int left = 0, right = nCards - 1; left <= right; aux *= -1){
		aux == 1 ? serejaP += max(cards[left], cards[right]) : 
				     dimaP += max(cards[left], cards[right]);

		cards[left] > cards[right] ? left++ : right--;
	}

	cout << serejaP << " " << dimaP << endl;

	return 0;
}
