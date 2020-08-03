#include<iostream>
#include<fstream>
using namespace std;

int main() {
	// input 파일 연결
	ifstream fin("C:\\Users\\USER\\Desktop\\input.txt");
	if (!fin) {
		cout << "err" << endl; return 0;
	}
	// field size 입력
	int f_size;
	fin >> f_size;
	// field 생성 및 초기화
	int **field = new int*[f_size];
	for (int i = 0; i < f_size; i++) {
		field[i] = new int[f_size];
	}
	for (int i = 0; i < f_size; i++) {
		for (int j = 0; j < f_size; j++) {
			fin >> field[i][j];
		}
	}
	// field 출력
	for (int i = 0; i < f_size; i++) {
		for (int j = 0; j < f_size; j++) {
			cout << field[i][j] << ' ';
		} cout << endl;
	}


}