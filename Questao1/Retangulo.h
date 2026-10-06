#pragma once 


class Retangulo
{
	private:
	int l1;
	int l2;
	
	public:
		Retangulo();
		Retangulo(int _l1, int _l2);
		
	void setL1(int _l1);
	int getL1();
	
	void setL2(int _l2);
	int getL2();
	
	void setArea(double _area);
	double getArea();
	
	double calcArea();
	double calcPerimetro();
};
	