#include <iostream>
#include <vector>
#include <algorithm>
#define INF 2147483647
using namespace std;

typedef vector<int> vi;

vi insertionSort(vi v) {
	int n = v.size();
	
	for (int i = 1; i < n; i++) {
		int j = i;
		
		while (j > 0 && v[j-1] > v[j]) {
			swap(v[j], v[j-1]);
			j--;
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
	vi sortedVector = insertionSort(unsortedVector);
	
	// output
	for (int i = 0; i < vectorSize; i++) {
		cout << sortedVector[i] << " ";
	}
	cout << endl;
	
}
