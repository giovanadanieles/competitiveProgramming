#include <bits/stdc++.h>
using namespace std;

int main(){
	int ncol; cin >> ncol; 
	int cubes[ncol];
	int max = -1;

	for(int i = 0; i < ncol; i++){
		cin >> cubes[i];
		
		if(cubes[i] > max) max = cubes[i];
	}

	//Using counting sort - O(n)
	int countobj[max+1]; //a count array to store the count of each unique object
	memset(countobj, 0, sizeof(countobj));

	//counting each element in the cubes array and placing the count at the appropriate index
	for(int i = 0; i < ncol; i++){
		countobj[cubes[i]]++;	//count the instances
	}

	//modifying the countobj array by adding the previous counts
	for(int i = 1; i <= max; i++){
		countobj[i] += countobj[i-1];
	}

	int ordered[ncol];
	memset(ordered, 0, sizeof(ordered));

	//placing objects in their right position and decreasing the count by one
	for(int i = 0; i < ncol; i++){
		ordered[countobj[cubes[i]]-1] = cubes[i];
		countobj[cubes[i]]--;
	}

	for(int i = 0; i < ncol; i++){
		cout << ordered[i] << " ";
	}
	cout << endl;

	return 0;
}