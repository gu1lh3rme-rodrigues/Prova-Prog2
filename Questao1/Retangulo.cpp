#include "Retangulo.h"

Retangulo::Retangulo()
{	
}

	Retangulo::Retangulo(int _l1, int _l2)
	{
		l1 = _l1;
		l2 = _l2;
		
	}
	
// gets e calculo area

	void Retangulo::setL1(int _l1){
		l1 = _l1;
	}
	
	int Retangulo::getL1(){
		return l1;
	}
	
	void Retangulo::setL2(int _l2){
		l2 = _l2;
	}
	int Retangulo::getL2(){
		return l2;
	}
	
	double Retangulo::calcArea(){
		double area = l1*l2;
		return area;
	}
	
	double Retangulo::calcPerimetro(){
		double peri = l1+l2;
		return peri;
	}
	
	
	
	