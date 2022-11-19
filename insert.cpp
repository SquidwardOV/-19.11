#include <iostream>
#include <time.h>

using namespace std;

void init(int** matr, int n, int m) {
	srand(time(0));
	for (int i = 0;i < n;++i) {
		for (int j = 0;j < m;++j) {
			matr[i][j] = rand() % 10;
		}
	}
}
void print(int** matr, int n, int m) {
	for (int i = 0;i < n;++i) {
		for (int j = 0;j < m;++j) {
			cout << matr[i][j] << '\t';
		}
		cout << '\n';
	}
}
void Sort(int** matr, int n, int m) {
	int temp;
	for (int i = 0;i < m;++i) {
		for (int j = i; j > 0; j--) {
			if (matr[n][j] < matr[n][j - 1]) {
				temp = matr[n][j];
				matr[n][j] = matr[n][j - 1];
				matr[n][j - 1] = temp;
			}
		}
	}
}
int main() {
	setlocale(LC_ALL, "Rus");
	int stroki, stolbci;
	cout << "Введите размерность строк и столбцов массива:\n";
	cin >> stroki >> stolbci;
	int num;
	int** arr = new int* [stroki];
	for (int i = 0;i < stroki;i++) {
		arr[i] = new int[stolbci];
	}
	init(arr, stroki, stolbci);
	print(arr, stroki, stolbci);
	cout << "Введите номер строки, которую необходимо отсортировать:\n";
	cin >> num;
	cout << "\n\n";
	Sort(arr, num, stolbci);
	print(arr, stroki, stolbci);
	for (int i = 0;i < stroki;i++) {
		delete[] arr[i];
	}
	delete[]arr;
}
