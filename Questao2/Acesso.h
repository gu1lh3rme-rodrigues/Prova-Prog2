#pragma once
#include "Livro.h"

class Acesso : public Livro{
	private:
		int acesso;
		
	public:	
		Acesso();
		Acesso(string _titulo, string _autor, int _nPag, int _acesso);
		
	int getAcesso();
		void setAcesso(int _acesso);
};