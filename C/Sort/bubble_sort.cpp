#include <iostream>
#include <vector>
#include <algorithm>
#define INF 2147483647
using namespace std;

typedef vector<int> vi;

vi bubbleSort(vi v) {
	int n = v.size();
	int i, j;
	
	for (i = 0; i < n-1; i++) {
		for (j = 0; j < n-i-1; j++) {
			if (v[j+1] < v[j]) {
				swap(v[j], v[j+1]);
			}
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
	vi sortedVector = bubbleSort(unsortedVector);
	
	// output
	for (int i = 0; i < vectorSize; i++) {
		cout << sortedVector[i] << " ";
	}
	cout << endl;
	
}
