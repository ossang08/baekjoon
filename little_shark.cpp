#include<iostream>
#include<fstream>
#include<queue>
using namespace std;

// �Ʊ���
struct little_shark {
	int size;
	int eaten_fish;
	int row;
	int column;
	little_shark(int r, int c) {
		size = 2; eaten_fish = 0;
		row = r; column = c;
	}
	void eat() {
		eaten_fish += 1;
	}
	void grow() {
		if (eaten_fish == size) {
			size += 1; eaten_fish = 0;
		}
	}
};
// �����
struct fish {
	int row;
	int column;
	fish(int r, int c) {
		row = r; column = c;
	}
};
// �ִܰ�� ���� ã��
int path(int** array, fish a, little_shark s) {

}
// ���� �� �ִ� ����� �˻�
void find(int** array, int a_size, little_shark s, fish* f_array) {

	for (int i = 0; i < a_size; i++) {
		for (int j = 0; j < a_size; j++) {
			if (array[i][j] != 0 && array[i][j] <= s.size) {

			}
		}
	}
}
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