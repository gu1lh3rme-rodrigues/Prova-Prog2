#pragma once
#include <string>

using namespace std;


class Carro{
	
	private:
		string marca;
		string modelo;
		int velocidade;
		
	public:
		Carro();
		Carro(string _marca, string _modelo, int _velocidade);
		
		string getMarca();
		string getModelo();
		int getVelocidade();
		
		void setMarca(string _marca);
		void setModelo(string _modelo);
		void setVelocidade(int _velocidade);
};