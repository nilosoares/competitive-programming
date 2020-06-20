#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

long long int n;
string nBinary;

string decToBin(long long int q) {
	if (q == 0) {
		return "0";
	}
	
	string binary = "";
	
	int mod = 0;
	
	while (q > 0) {
		mod = q % 2;
		
		binary += (mod == 0) ? "0" : "1";
		
		q = q / 2;
	}
	
	reverse(binary.begin(), binary.end());
	
	return binary;
}

long long int binToDec(string s) {	
	long long int q = 0;
	long long int power = 1;
	
	for (int i = s.length()-1; i >= 0; i--) {
		q += (s[i] - '0') * power;		
		power *= 2;
	}
	
	return q;
}

int main () {
	
	cin >> n;
	
	nBinary = decToBin(n);
	
	cout << "decToBin(" << n << ") = " << nBinary << endl;
	cout << "binToDec(" << nBinary << ") = " << binToDec(nBinary) << endl;
	
	return 0;
	
}
