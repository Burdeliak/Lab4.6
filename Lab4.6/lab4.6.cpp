#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double result1 = 0, result2 = 0, result3 = 0, result4 = 0;

    int i = 1;
    while (i <= 15) {
        double sum_part = sin(10 * i) + cos(10 * i);
        double prod = 1;
        int k = 1;
        while (k <= i) {
            prod *= sqrt(k);
            k++;
        }
        result1 += sum_part / prod;
        i++;
    }

    i = 1;
    do {
        double sum_part = sin(10 * i) + cos(10 * i);
        double prod = 1;
        int k = 1;
        do {
            prod *= sqrt(k);
            k++;
        } while (k <= i);
        result2 += sum_part / prod;
        i++;
    } while (i <= 15);

    
    for (int i = 1; i <= 15; i++) {
        double sum_part = sin(10 * i) + cos(10 * i);
        double prod = 1;
        for (int k = 1; k <= i; k++) {
            prod *= sqrt(k);
        }
        result3 += sum_part / prod;
    }

    
    for (int i = 15; i >= 1; i--) {
        double sum_part = sin(10 * i) + cos(10 * i);
        double prod = 1;
        for (int k = 1; k <= i; k++) {
            prod *= sqrt(k);
        }
        result4 += sum_part / prod;
    }

    // Виводимо результати
    cout << "Result while: " << result1 << endl;
    cout << "Result do-while: " << result2 << endl;
    cout << "Result for (n++): " << result3 << endl;
    cout << "Result (n--): " << result4 << endl;

    return 0;
}

