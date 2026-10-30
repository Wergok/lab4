#include <iostream>

using namespace std;

int main() {
	int healthHero = 20;
	int healthMonster = 15;	
	bool isEnd = false;
	bool isWin;
	int choice;
	
	do {
		cout << "Твое здоровье: " << healthHero << endl << "Здоровье монстра: " << healthMonster << endl;
		cout << "Введи действие: ";
		cin >> choice;

		switch (choice) {
		case 1:
			healthMonster -= 4;
			break;
		case 2: 
			if (healthHero <= 20 && healthHero >= 18) {
				healthHero = 20;
			}
			else
			{
				healthHero += 3;
			}
			break;
		case 0: 
			isEnd = true;
			break;
		default:
			cout << "Неверная команда!" << endl;
			break;
		}

		if (isEnd != true && healthMonster >0 && (choice == 1 || choice == 2)) {
			healthHero -= 2;
		}

		if (healthMonster <= 0) {
			isEnd = true;
			isWin = true;
		}
		else if (healthHero <= 0) {
			isEnd = true;
			isWin = false;
		}


	} while (!isEnd);


	cout << "Результат боя: " << endl;
	cout << "Твое здоровье: " << (healthHero < 0 ? 0 : healthHero) << endl;
	cout << "Здоровье монстра: " << (healthMonster < 0 ? 0 : healthMonster) << endl;

	if (healthMonster <= 0) {
		cout << "Ты победил!";
	}
	else if (healthHero <= 0) {
		cout << "Ты проиграл!";
	}
	else {
		cout << "Ты завершил игру.";
	}
}