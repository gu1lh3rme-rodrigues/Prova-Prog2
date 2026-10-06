#include <iostream>
#include <string>
#include "Teste.cpp"

class TesteSobre : public Teste
{
	public:
		
	virtual void Aceleram()override 
	{
		printf("+60km");
	}
	
	virtual void Desaceleram() override 
	{
		printf("Abaixe a velocidade para 80km/h");
	}
	
	
};