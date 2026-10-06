#include "Livro.h"

Livro::Livro()
{
}

	Livro::Livro(string _titulo, string _autor, int _nPag)
	{
		titulo = _titulo;
		autor = _autor;
		nPag = _nPag;
	}
	
	string Livro::getTitulo()
	{
		return titulo;
	}
	
	string Livro::getAutor()
	{
		return autor;
	}
	
	int Livro::getNpag()
	{
		return nPag;
	}
	
	void Livro::setTitulo(string _titulo){
		titulo = _titulo;
	}
	
	void Livro::setAutor(string _autor){

		autor = _autor;
	}
	
	void Livro::setNpag(int _nPag){
		nPag = _nPag;
	}
	
	
	
	
	
	