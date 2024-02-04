#include <iostream>
#include "func.h"
using namespace std;

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

