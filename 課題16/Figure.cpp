#include <iostream>
#include "Figure.h" //�N���X��錾���Ă���w�b�_]

void Figure::SetTeihen(float f) {
	teihen = f;
}

void Figure::SetTakasa(float f) {
	takasa = f;
}

void Figure::Disp() {
	std::cout << menseki;
}
