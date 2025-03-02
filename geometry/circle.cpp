#include <iostream>
#include <math.h>
using namespace std;
void circle(double *A, int r, int alpha){
    double lenght_cir = 2 * M_PI * r;
    A[0] = lenght_cir;
    double square_cir = M_PI * r * r;
    A[1] = square_cir;
    double area_cir_sector = square_cir * alpha / 360;
    A[2] = area_cir_sector;
}

void trapezoid(double *A, int a, int b, int c, int d, int h){
    double mid_line = (a + b) / 2;
    A[0] = mid_line;
    double square_trap = mid_line * h;
    A[1] = square_trap;
    double perimeter = a + b + c + d;
    A[2] = perimeter;
}

int main(){
    double ACir[3];
    double Atrap[3];

    circle(ACir, 3, 40);
    std::cout << "lenght of circle: ";
    std::cout << ACir[0] << std::endl;
    std::cout << "sqare of circle: ";
    std::cout << ACir[1] << std::endl;
    std::cout << "area of a circular sector: ";
    std::cout << ACir[2] << std::endl;

    trapezoid(Atrap, 3, 4, 6, 2, 2);
    std::cout << "lenght of midle line: ";
    std::cout << Atrap[0] << std::endl;
    std::cout << "sqare of trapezoid: ";
    std::cout << Atrap[1] << std::endl;
    std::cout << "perimeter of trapezoid: ";
    std::cout << Atrap[2] << std::endl;


}