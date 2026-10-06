#include "Carro.h"
#include <string>

Carro::Carro()
{
}

	Carro::Carro(string _marca, string _modelo, int _velocidade)
	{
		marca = _marca;
		modelo = _modelo;
		velocidade = _velocidade;
	}
	
	string Carro::getMarca()
	{
		return marca;
	}
	
	string Carro::getModelo()
	{
		return modelo;
	}
	
	int Carro::getVelocidade()
	{
		return velocidade;
	}
	
	////////////////////////////////////////////
	
	void Carro::setMarca(string _marca){
		marca = _marca;
	}
	
	void Carro::setModelo(string _modelo)
	{
		modelo = _modelo;
	}
	
	void Carro::setVelocidade(int _velocidade)
	{
		velocidade = _velocidade;	
	}
	