#include "Acesso.h"


Acesso::Acesso()
{
}

	Acesso::Acesso(string _titulo, string _autor, int _nPag, int _acesso)
	:Livro(_titulo, _autor, _nPag)
	{
		acesso = _acesso;
	}
	
	int Acesso::getAcesso()
	{
		return acesso;
	}
	
	void Acesso::setAcesso(int _acesso)
	{
		acesso = _acesso;
	}
	