#include <iostream>
#include <string>
using namespace std;

bool isDivisibleBy11(string n) {	
	int i;
	int nLength = n.length();
	
	int s1 = 0;
	for (i = 0; i < nLength; i += 2) {
		s1 += n[i] - '0';
	}
	
	int s2 = 0;
	for (i = 1; i < nLength; i += 2) {
		s2 += n[i] - '0';
	}
	
	return (s1 % 11 == s2 % 11);
}

int main () {
	
	string n;
	
	cin >> n;
	
	if (isDivisibleBy11(n)) {
		cout << n << " is divisible by 11." << endl;
	} else {
		cout << n << " is not divisible by 11." << endl;
	}
	
}
