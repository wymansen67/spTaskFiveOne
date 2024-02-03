#include <iostream>
using namespace std;

int getMaxArray(int Int[], int size) {

    int max = -2147483648;

    for (int i = 0; i < size; i++) {
        if (Int[i] > max) { max = Int[i]; }
        else { max = max; }
    }

    return max;
}

float getMaxArray(float Float[], int size) {

    int max = 1.17549e-038;

    for (int i = 0; i < size; i++) {
        if (Float[i] > max) { max = Float[i]; }
        else { max = max; }
    }

    return max;
}

double getMaxArray(double Double[], int size) {

    int max = 2.22507e-308;

    for (int i = 0; i < size; i++) {
        if (Double[i] > max) { max = Double[i]; }
        else { max = max; }
    }

    return max;
}

int main()
{
    setlocale(LC_ALL, "ru");

     int Int[10];
     for (int i = 0; i < sizeof(Int) / sizeof(Int[0]); i++) {
         Int[i] = rand();
         cout << "Int[" << i << "]:" << Int[i] << endl;
     }
     cout << "\nМаксимальное int массива: " << getMaxArray(Int, 10) << endl << endl;

     double Float[10];
     for (int i = 0; i < sizeof(Float) / sizeof(Float[0]); i++) {
         Float[i] = rand();
         cout << "Float[" << i << "]:" << Float[i] << endl;
     }
     cout << "\nМаксимальное float массива: " << getMaxArray(Float, 10) << endl << endl;

     double Double[10];
     for (int i = 0; i < sizeof(Double) / sizeof(Double[0]); i++) {
         Double[i] = rand();
         cout << "Double[" << i << "]:" << Double[i] << endl;
     }
     cout << "\nМаксимальное double массива: " << getMaxArray(Double, 10) << endl << endl;
}

