#include <iostream>
#include <string>
#define N_MAX 10001
using namespace std;

int width;
int height;
int n;
int x, y;
int nbFloodedCells = 0;
char rectangle[N_MAX][N_MAX];

void floodFill4(int i, int j) {
	if (i < 0 || i > width || j < 0 || j > height) {
		return;
	}
	
	if (rectangle[i][j] != '.') {
		return;
	}
	
	nbFloodedCells++;
		
	rectangle[i][j] = 'X';
	
	floodFill4(i-1, j);
	floodFill4(i, j-1);
	floodFill4(i, j+1);
	floodFill4(i+1, j);
}

void printRectangle() {
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			cout << rectangle[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

int main () {
	
	cout << "Width and height of the rectangle: ";
	cin >> width >> height;
	
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			rectangle[i][j] = '.';
		}
	}
	
	cout << "Number of blocks: ";
	cin >> n;
	
	cout << "Position of each block (i, j):" << endl;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		
		rectangle[x][y] = 'B';
	}
	
	cout << "Position of the flood (i, j): ";
	cin >> x >> y;
	
	cout << "Rectangle before the flood:" << endl;
	printRectangle();
	
	floodFill4(x, y);
	
	cout << "Rectangle after the flood:" << endl;
	printRectangle();
	
	cout << "Number of flooded cells = " << nbFloodedCells << endl; 
		
	return 0;
	
}
