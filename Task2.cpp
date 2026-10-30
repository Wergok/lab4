#include <iostream>
#include <string>

using namespace std;

int main() {
	int number;
	cout << "Введите нат число от 2 до 10000: ";
	cin >> number;

	if (number > 10000 || number < 2) {
		cout << "Неверные входные данные";
		return 1;
	}


	int divider = 1;
	int sum = 0;
	while (divider < number) {
		if (number % divider == 0) {
			sum += divider;
		}
		divider++;
	}

	string answer;

	if (sum == number) {
	 answer = "Да";
	}
	else
	{
		answer = "Нет";
	}
	cout << "Сумма: " << sum << endl << answer;
}