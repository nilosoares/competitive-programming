#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<int> vi;

vi quickSort(vi v, int left, int right) {
	if (left >= right) {
		return v;
	}
	
	int i = left;
	int j = right;
	int pivot = v[(i+j)/2];
	
	while (i <= j) {
		while (v[i] < pivot) i++;
		while (v[j] > pivot) j--;
		
		if (i <= j) {
			swap(v[i], v[j]);
			i++;
			j--;
		}
	}
	
	quickSort(v, left, j);
	quickSort(v, i, right);
	
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
	vi sortedVector = quickSort(unsortedVector, 0, vectorSize);
	
	// output
	for (int i = 0; i < vectorSize; i++) {
		cout << sortedVector[i] << " ";
	}
	cout << endl;
	
}
