#include <iostream>
using namespace std;

int findMaxElement(int array[], int size) {
    int max = array[0]; 

    for (int i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}

int main() {
    setlocale(LC_ALL, "Ukrainian");
    const int SIZE = 10;
    int divisors[SIZE];

    int number = 100;

    int count = 0;
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            divisors[count] = i;
            count++;
        }
    }

    int maxElement = findMaxElement(divisors, count);

    cout << "Максимальний дiльник числа " << number << ": " << maxElement << endl;

    return 0;
}
