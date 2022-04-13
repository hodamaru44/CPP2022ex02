// CPP2022ex02.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;
int main() {
	const int DATA_NUM = 10;	// 配列の要素数

	// 10人の学生のテストの得点を格納した配列
	int point[] = { 85, 72, 63, 45, 100, 98, 52, 88, 74, 65 };
	int i, j;			// 配列の要素番号（ループカウンタ）
	char grade;			// 成績の評価

	for (i = 0; i < DATA_NUM - 1; i++) {
		for (j = i + 1; j < DATA_NUM; j++) {
			if (point[i] < point[j]) {
				int w = point[i];
				point[i] = point[j];
				point[j] = w;
			}
		}
		if (point[i] < 60) {

			break;
		}
		else {
			// 得点に応じた評価を設定する
			if (point[i] >= 80) grade = 'A';
			else if (point[i] >= 70) grade = 'B';
			else grade = 'C';
			// 評価を表示する
			cout << point[i] << " = " << grade << endl;
		}
	/*const int DATA_NUM = 10;	// 配列の要素数

	// 10人の学生のテストの得点を格納した配列
	int point[] = { 85, 72, 63, 45, 100, 98, 52, 88, 74, 65 };
	int i,j;			// 配列の要素番号（ループカウンタ）
	char grade;	        // 成績の評価
	
	for (i = 0; i <= DATA_NUM;i++) {

		std::sort(point, point + (sizeof(point) / sizeof(point[0])));
		if (point[i] >= 83) grade = 'A';
		else if (point[i] <= 82 && point[i] >= 66) grade = 'B';
		else if (point[i] <= 65 && point[i] >= 50) grade = 'C';
		else grade = 'D';
		cout << point[i] << "=" << grade<< endl;
		
	}*/
	return 0;
}