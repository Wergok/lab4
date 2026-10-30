
#include <iostream>

using namespace std;

int main() {
    int r, c;

    cout << "Введи количество строк и столбцов (3...9): ";
    cin >> r >> c;

    if (r < 3 || r > 9 || c < 3 || c > 9) {
        cout << "Неверные размеры карты";
        return 1;
    }

    int obstacles = 0;
    int freeCells = 0;

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {

            if (i == 1 && j == 1) {
                cout << "S ";
            }
            else if (i == r && j == c) {
                cout << "F ";
            }
            else if ((i * j) % 7 == 0) {
                cout << "X ";
                obstacles++;
            }
            else {
                cout << ". ";
                freeCells++;
            }
        }

        cout << endl;
    }

    cout << "Количество препятствий X: " << obstacles << endl;
    cout << "Количество свободных клеток: " << freeCells << endl;
}
