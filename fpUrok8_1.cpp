/*1. Написать функцию, которая получает в качестве аргументов целое положительное число и систему счисления, в которую это число должно переводится (системы счисления от 2 до 36). Например, при переводе
числа 27 в систему счисления 16 должно получиться
1B; 13 в 5-ю — 23; 35 в 18-ю — 1H.

7. Написать функцию, меняющую порядок следования
элементов передаваемого ей массива на противоположный*/

#include <iostream>
using namespace std;

void PrintArr(int arrFunc[], const int size) {
	for (int i = 0; i < size; i++) {
		cout << arrFunc[i] << "\t";
		if (i % 10 == 9)
			cout << endl;
	}
	cout << endl;
}

void flipArr(int arrFunc[], const int size) {
	for (int i = 0; i < size / 2; i++)
		swap(arrFunc[i], arrFunc[(size-1) - i]);

}

void sys()
{
	int syst, digit;
	cout << "Пожалуйста введите число: ";
	cin >> digit;
	cout << "\nВведите систему счисления: ";
	cin >> syst;
	int i = 0, A[50];
	for (; digit > 0; i++)
	{
		A[i] = digit % syst;
		digit /= syst;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		if (A[j] < 10)
			cout << A[j];
		else
			cout << char(A[j] - 10 + 'A');
	}
}


int main()
{
	setlocale(LC_ALL, "ru");
	const int SIZE = 21;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
		arr[i] = rand() % 100;

	PrintArr(arr, SIZE);
	flipArr(arr, SIZE);
	PrintArr(arr, SIZE);

	sys();

	return 0;
}

