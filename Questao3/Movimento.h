#pragma once
#include "Carro.h"

class Movimento: public Carro{
	
	private: 
		int acelera;
		int desacelera;
		
	public: 
	
		Movimento();
		Movimento(string _marca, string _modelo, int _velocidade, int _acelera, int _desacelera);
		
	int getAcelera();
	void setAcelera(int _acelera);
	
	int getDesacelera();
	void setDesacelera(int _desacelera);
};