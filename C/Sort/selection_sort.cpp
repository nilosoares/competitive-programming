#include <iostream>
#include <vector>
#include <algorithm>
#define INF 2147483647
using namespace std;

typedef vector<int> vi;

vi selectionSort(vi v) {
	int n = v.size();
	int i, j, min;
	
	for (i = 0; i < n; i++) {
		min = i;
		for (j = i+1; j < n; j++) {
			if (v[j] < v[min]) {
				min = j;
			}
		}
		
		if (min != i) {
			swap(v[i], v[min]);
		}
	}
	
	return v;
}

int main () {
	
	int vectorSize;
	vi unsortedVector;
	
	// input
	cin >> vectorSize;
	
	unsortedVector.resize(vectorSize);
	
	for (int i = 0; i < vectorSize; i++) {
		cin >> unsortedVector[i];
	}
	
	// sort
	vi sortedVector = selectionSort(unsortedVector);
	
	// output
	for (int i = 0; i < vectorSize; i++) {
		cout << sortedVector[i] << " ";
	}
	cout << endl;
	
}
