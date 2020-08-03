#include<iostream>
#include<fstream>
using namespace std;

int main() {
	// input file connection
	ifstream fin("C:\\Users\\USER\\Desktop\\input.txt");
	if (!fin) {
		cout << "err" << endl; return 0;
	}
	// get field size 
	int f_size;
	fin >> f_size;
	// make and initialize field
	int **field = new int*[f_size];
	for (int i = 0; i < f_size; i++) {
		field[i] = new int[f_size];
	}
	for (int i = 0; i < f_size; i++) {
		for (int j = 0; j < f_size; j++) {
			fin >> field[i][j];
		}
	}
	// print field
	for (int i = 0; i < f_size; i++) {
		for (int j = 0; j < f_size; j++) {
			cout << field[i][j] << ' ';
		} cout << endl;
	}
}
