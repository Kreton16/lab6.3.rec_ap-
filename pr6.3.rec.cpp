#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

int Minimum(int* a, const int size, int& min, int i) {
    if (i < size) {
        if (min > a[i])
            min = a[i];
        i++;
        Minimum(a, size, min, i);
    }
    return min;
}

void Create(int* c, const int size, const int Low, const int High, int i)
{
    if (i < size) {
        c[i] = Low + rand() % (High - Low + 1);
        i++;
        Create(c, size, Low, High, i);
    }
}

void Print(int* c, const int size, int i)
{
    if (i < size) {
        cout << setw(4) << c[i];
        i++;
        Print(c, size, i);
    }
}

template <typename Q>
int Minimum_sh(int* a, const int size, int& min, int i) {
    if (i < size) {
        if (min > a[i])
            min = a[i];
        i++;
        Minimum(a, size, min, i);
    }
    return min;
}

template <typename W>
void Create_sh(int* c, const int size, const int Low, const int High, int i)
{
    if (i < size) {
        c[i] = Low + rand() % (High - Low + 1);
        i++;
        Create(c, size, Low, High, i);
    }
}

template <typename E>
void Print_sh(int* c, const int size, int i)
{
    if (i < size) {
        cout << setw(4) << c[i];
        i++;
        Print(c, size, i);
    }
}

int main()
{
    srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
    const int n = 21;
    int a[n];
    int i = 0;
    int Low = 15;
    int High = 85;
    Create(a, n, Low, High, i);
    int min = a[0];
    Print(a, n, i);
    Minimum(a, n, min, i);
    cout << endl;
    cout << "Minimum: ";
    cout << min;

    return 0;

}