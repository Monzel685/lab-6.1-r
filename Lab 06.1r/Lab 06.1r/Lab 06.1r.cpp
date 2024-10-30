#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

// Рекурсивна функція створення масиву
void Create(int* a, const int size, const int Low, const int High, int i = 0) {
    if (i < size) {
        a[i] = Low + rand() % (High - Low + 1);
        Create(a, size, Low, High, i + 1);
    }
}

// Рекурсивна функція виведення масиву
void Print(int* a, const int size, int i = 0) {
    if (i < size) {
        cout << setw(4) << a[i];
        Print(a, size, i + 1);
    }
    else {
        cout << endl;
    }
}

// Рекурсивна функція обробки елементів
void ProcessElements(int* a, const int size, int& count, int& sum, int i = 0) {
    if (i < size) {
        if (a[i] > 0 || a[i] % 2 != 0) {
            count++;
            sum += a[i];
            a[i] = 0; // замінюємо елементи, що відповідають критерію, на нулі
        }
        ProcessElements(a, size, count, sum, i + 1);
    }
}

int main() {
    srand((unsigned)time(0)); // ініціалізація генератора випадкових чисел

    const int n = 27;
    int a[n];
    int Low = -35, High = 25;

    Create(a, n, Low, High);

    cout << "Original array:" << endl;
    Print(a, n);

    int count = 0, sum = 0;
    ProcessElements(a, n, count, sum);

    cout << "\nCount of elements matching the criteria: " << count << endl;
    cout << "Sum of elements matching the criteria: " << sum << endl;

    cout << "\nModified array:" << endl;
    Print(a, n);

    return 0;
}
