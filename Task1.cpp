#include <iostream>

using namespace std;

int main() {
	int round;
	cout << "Введите число раундов(1...20): ";
	cin >> round;

	if (round < 1 || round > 20) {
		cout << "Неверный раунд";
		return 1;
	}

	const int startPoint = 0;
	int prevPoint = 0;
	int greatestPoint = 0;
	int roundGreatestPoint = 0;
	int point = 0;
	int score = 0;
	

	for (int i = 1; i <= round; i++) {
		cout << "Введите очки за раунд: ";
		cin >> point;
		if (point < -100 || point > 300)
		{
			cout << "Неверные очки" << endl;
			i--;
			continue;
		}

		score += point;

		if (score > greatestPoint && score > startPoint) {
			greatestPoint = score;
			roundGreatestPoint = i;
		}

		cout << "Раунд " << i << " Очки: " << score << "\n";
	}		
	cout << "Наибольший счет: " << greatestPoint << endl << "Раунд достижения: " << roundGreatestPoint;
}