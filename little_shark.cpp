#include<iostream>
#include<fstream>
#include<queue>
using namespace std;

// 아기상어
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
// 물고기
struct fish {
	int row;
	int column;
	fish(int r, int c) {
		row = r; column = c;
	}
};
// 최단경로 길이 찾기
int path(int** array, fish a, little_shark s) {

}
// 먹을 수 있는 물고기 검색
void find(int** array, int a_size, little_shark s, fish* f_array) {

	for (int i = 0; i < a_size; i++) {
		for (int j = 0; j < a_size; j++) {
			if (array[i][j] != 0 && array[i][j] <= s.size) {

			}
		}
	}
}
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