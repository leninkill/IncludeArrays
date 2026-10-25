#include <iostream>

using namespace std;

#define ll long long

int main() {
    ll numbers[3][2] // 3 элемента в массиве, каждый из них это массив и содержит по 2 элемента
    {
        {1, 2},
        {}, // {3, 4},
        {5, 6}
    }; // назначаем элементы, так же можно назначить только несколько

    cout << "numbers[2][1] = " << numbers[2][1] << endl; // пишем значение элемента

    numbers[2][1] = 10; // меняем значение элемента
    cout << "numbers[2][1] = " << numbers[2][1] << endl;

    const int rows = 3, columns = 2;
    int array[rows][columns] {{1,2}, {3,4}, {5,6}};

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    // специальный вид for для прохода по элементам
    for (auto &subitem : array) {
        for (auto number : subitem) {
            cout << number << "\t";
        }
        cout << endl;
    }

    return 0;
}