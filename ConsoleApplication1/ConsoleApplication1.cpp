#include <iostream>
#include <cmath>
using namespace std;


const double PI = acos(-1.0); 

int main() {
    setlocale(LC_ALL, "Russian");
    double radius, height;

    
    cout << "Введите радиус основания конуса: ";
    cin >> radius;

    while (radius <= 0) {
        cout << "Радиус должен быть положительным числом. Попробуйте снова: ";
        cin >> radius;
    }

    cout << "Введите высоту конуса: ";
    cin >> height;

    while (height <= 0) {
        cout << "Высота должна быть положительной. Попробуйте снова: "; 
        cin >> height;
    }

    
    double slant_height = sqrt(pow(radius, 2) + pow(height, 2));

    
    double lateral_area = PI * radius * slant_height;

    
    double total_area = lateral_area + PI * pow(radius, 2);

   
    cout << "Боковая площадь поверхности конуса: " << lateral_area << endl;
    cout << "Общая площадь поверхности конуса: " << total_area << endl;

    return 0;
}