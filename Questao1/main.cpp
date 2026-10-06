#include <iostream>
#include "Retangulo.h"

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Retangulo *ret1 = new Retangulo(2, 3);
	Retangulo *ret2 = new Retangulo(3, 3);
	
	
	cout << "Retangulo 1: \n" <<endl;
	cout << "Lado 1: " << ret1->getL1() << endl;
	cout << "Lado 2: " << ret1->getL2() << endl;
	cout << "Valor da Area: " <<ret1->calcArea() << endl;
	cout << "Valor do Perimetro: " <<ret1->calcPerimetro() << endl;
	
	cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||"<< endl;
	
	cout << "Retangulo 2: \n" <<endl;
	cout << "Lado 1: " << ret2->getL1() << endl;
	cout << "Lado 2: " << ret2->getL2() << endl;
	cout << "Valor da Area: " <<ret2->calcArea() << endl;
	cout << "Valor do Perimetro: " <<ret2->calcPerimetro() << endl;
	
	return 0;
}
