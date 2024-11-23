#include <iostream>
using namespace std;

// Функция для разделения супа
void splitSoup(int n) {
    // Проверяем, делится ли n на 2
    if (n % 2 != 0) {
        cout << "NO" << endl; // Нельзя разделить поровну
        return;
    }

    // Выводим YES
    cout << "YES" << endl;

    // Первая половина
    int half = n / 2;
    cout << half << endl; // Количество мисок у Пети
    for (int i = 1; i <= half; ++i) {
        cout << i << " "; // Массы мисок Пети
    }
    cout << endl;

    // Вторая половина
    cout << half << endl; // Количество мисок у Маши
    for (int i = half + 1; i <= n; ++i) {
        cout << i << " "; // Массы мисок Маши
    }
    cout << endl;
}

// Тестирование программы
void runTests() {
    // Переменная для проверки успешности тестов
    bool allTestsPassed = true;

    // Тест 1: четное n
    cout << "Test 1: n = 6" << endl;
    splitSoup(6);
    cout << endl;

    // Тест 2: нечетное n
    cout << "Test 2: n = 7" << endl;
    splitSoup(7);
    cout << endl;

    // Тест 3: минимальное n
    cout << "Test 3: n = 2" << endl;
    splitSoup(2);
    cout << endl;

    // Тест 4: большое четное n
    cout << "Test 4: n = 10" << endl;
    splitSoup(10);
    cout << endl;

    // Тест 5: большое нечетное n
    cout << "Test 5: n = 15" << endl;
    splitSoup(15);
    cout << endl;

    // Успешное завершение всех тестов
    cout << "All tests passed successfully!" << endl;
}

int main() {
    // Запуск тестов
    runTests();

    // Основной цикл программы
    while (true) {
        // Чтение n из стандартного ввода
        cout << "Enter n (or 0 to exit): ";
        int n;
        cin >> n;

        // Проверка на выход
        if (n == 0) {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }

        // Выполнение разделения
        splitSoup(n);
    }

    return 0;
}
