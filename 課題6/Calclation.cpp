#include < iostream>
#include "Calclation.h"
//代入
void Calclation::SetA(float a) {
	A = a;
}
void Calclation::SetB(float b) {
	B = b;
}
//計算して表示
void Calclation::Disp() {
	std::cout << A << " + " << B << " = " << A + B << "\n";
	std::cout << A << " + " << B << " = " << A - B << "\n";
}