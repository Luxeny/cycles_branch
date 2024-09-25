/*************************
* Автор: Сатин В.С.      *
* Дата: 25.09.2024       *
* Название: Вариант№8    *
*************************/

#include <iostream>
#include <cmath>

using namespace std;

// Вычисляет относительное количество жидкости
int main() {

    float yg = 0.0011, mg = 0.00018;
    float yj[3] = {0.79, 1.03, 1.26};
    float mj[3] = {0.012, 0.04, 13.5};
    float G, M, K, f; 
    int i = 0;

    while (i < 3) {

        G = yg/yj[i];
        M = mj[i]/mg;
        K = G * M;
        
        if (K < 0.5) {
            f = (0.8/(1+2.03*pow(G, 0.26)*pow(M, 0.05)));
        }
        else if (K > 0.5) {
            f = (0.8/(1+2.15*pow(G, 0.16)*pow(M, 0.03)));
        }

        // Округление до 3 чисел после запятой
        cout.precision(3);
        cout.setf(ios::fixed);

        cout << "f = " << f << " | K = " << K << endl;

        i++;
        
    }
}