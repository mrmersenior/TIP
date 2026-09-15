#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    int low = 1;
    int high = 1023;
    int steps = 0;
    char answer;

    cout << "Загадайте число от 1 до 1023, а я постараюсь угадать его за 10 шагов." << endl;
    cout << "Отвечайте символами:" << endl;
    cout << "  > (если ваше число больше)" << endl;
    cout << "  < (если ваше число меньше)" << endl;
    cout << "  = (если я угадал)" << endl << endl;

    while (low <= high && steps < 10) {
        int mid = low + (high - low) / 2;
        steps++;
        
        cout << "Шаг " << steps << ": Ваше число равно " << mid << "? (>, <, =): ";
        cin >> answer;

        if (answer == '=') {
            cout << "Ура! Я угадал ваше число за " << steps << " шагов!" << endl;
            return 0;
        } else if (answer == '>') {
            low = mid + 1;
        } else if (answer == '<') {
            high = mid - 1;
        } else {
            cout << "Неверный ввод. Пожалуйста, используйте только '>', '<' или '='." << endl;
            steps--;
        }
    }

    cout << "Кажется, в ответов закралась ошибка, или диапазон был нарушен." << endl;
    return 0;
}
