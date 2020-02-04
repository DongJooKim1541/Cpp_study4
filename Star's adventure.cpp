#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
void Show(int p_row, int p_col, int row, int col);

int main() {

	srand(time(NULL));
	int heart = rand() % 99 + 1;
	int row = heart / 10;
	int col = heart % 10;
	int num;
	int prev_row = 0;
	int prev_col = 0;
	while (true) {
		if (row == prev_row&&col == prev_col) break;
		system("cls");
		Show(prev_row, prev_col, row, col);
		cout << "1. 왼쪽  2. 오른쪽  3. 아래  4. 위" << endl;
		cout << endl;
		cout << "어디로 갈까요 : ";
		cin >> num;
		switch (num) {
		case 1:
			prev_col--;
			if (prev_col < 0) {
				prev_col++;
			}
			break;
		case 2:
			prev_col++;
			if (prev_col > 9) {
				prev_col--;
			}
			break;
		case 3:
			prev_row++;
			if (prev_row > 9) {
				prev_row--;
			}
			break;
		case 4:
			prev_row--;
			if (prev_row < 0) {
				prev_row++;
			}
			break;
		default:
			break;
		}
	}
	system("cls");
	cout << "게임에서 승리하셨습니다!" << endl;
	return 0;
}
void Show(int p_row, int p_col, int row, int col) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (row == i && col == j) {
				cout << "♡";
			}
			else if (i == p_row && j == p_col) {
				cout << "☆";
			}
			else {
				cout << "□";
			}
		}
	cout << endl;
	}
}