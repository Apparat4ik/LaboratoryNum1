#include <iostream>
#include <math.h>
using namespace std;
int circle(double *A, int r, int alpha){      // в функцию передаются значения радиуса окружности и агла альфа для площади кругового сектора.
    if (r < 0){
        return 0;
    }
    double lenght_cir = 2 * M_PI * r;
    A[0] = lenght_cir;
    double square_cir = M_PI * r * r;
    A[1] = square_cir;
    double area_cir_sector = square_cir * abs(alpha) / 360;
    A[2] = area_cir_sector;
}

int trapezoid(double *A, int a, int b, int c, int d, int h){    // здесь передаются значения всех сторон и высоты
    if (a < 0 || b < 0 || c < 0 || d < 0 || h < 0 ){
        return 0;
    }
    double mid_line = (a + b) / 2;
    A[0] = mid_line;
    double square_trap = mid_line * h;
    A[1] = square_trap;
    double perimeter = a + b + c + d;
    A[2] = perimeter;
}

int main(){
    double ACir[] = {0, 0, 0};       // массивы, куда будут записываться найденые значения
    double Atrap[] = {0, 0, 0};

    circle(ACir, 3, 40);
    if (ACir[0] == 0 && ACir[1] == 0 && ACir[2] == 0){
        std::cout << "invalid values";
    }
    else{
        std::cout << "lenght of circle: ";      
    std::cout << ACir[0] << std::endl;      //вывод всех значений по индексам соответствующих массивов
    std::cout << "sqare of circle: ";
    std::cout << ACir[1] << std::endl;
    std::cout << "area of a circular sector: ";
    std::cout << ACir[2] << std::endl;
    }
    trapezoid(Atrap, 3, 4, 6, 2, 2);
    

    if (Atrap[0] == 0 && Atrap[1] == 0 && Atrap[2] == 0){
        std::cout << "invalid values";
    }
    else {
        std::cout << "lenght of midle line: ";
    std::cout << Atrap[0] << std::endl;
    std::cout << "sqare of trapezoid: ";
    std::cout << Atrap[1] << std::endl;
    std::cout << "perimeter of trapezoid: ";
    std::cout << Atrap[2] << std::endl;
    }
    return 0;
}