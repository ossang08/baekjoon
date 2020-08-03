#include<iostream>
#include<fstream>
using namespace std;

int main() {
	// input ���� ����
	ifstream fin("C:\\Users\\USER\\Desktop\\input.txt");
	if (!fin) {
		cout << "err" << endl; return 0;
	}
	// field size �Է�
	int f_size;
	fin >> f_size;
	// field ���� �� �ʱ�ȭ
	int **field = new int*[f_size];
	for (int i = 0; i < f_size; i++) {
		field[i] = new int[f_size];
	}
	for (int i = 0; i < f_size; i++) {
		for (int j = 0; j < f_size; j++) {
			fin >> field[i][j];
		}
	}
	// field ���
	for (int i = 0; i < f_size; i++) {
		for (int j = 0; j < f_size; j++) {
			cout << field[i][j] << ' ';
		} cout << endl;
	}
}