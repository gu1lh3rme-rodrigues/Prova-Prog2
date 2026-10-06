#include "Movimento.h"

Movimento::Movimento()
{
}

	Movimento::Movimento(string _marca, string _modelo, int _velocidade, int _acelera, int _desacelera)
	:Carro( _marca,  _modelo,  _velocidade)
	
	{
		acelera = _acelera;
		desacelera = _desacelera;
	}
	
	int Movimento::getDesacelera()
	{
		return desacelera;
	}
	
	void Movimento::setDesacelera(int _desacelera)
	{
		desacelera = _desacelera;
	}
	
	int Movimento::getAcelera()
	{
		return acelera;
	}
	
	void Movimento::setAcelera(int _acelera)
	{
		acelera = _acelera;
	}
	
	
	
	
	
	