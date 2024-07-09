#include <iostream>
#include "Figure.h" //クラスを宣言しているヘッダ]

void Figure::SetTeihen(float f) {
	teihen = f;
}

void Figure::SetTakasa(float f) {
	takasa = f;
}

void Figure::Disp() {
	std::cout << menseki;
}
