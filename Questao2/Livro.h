#pragma once
#include <string>

using namespace std;

class Livro{
	
	private:
		string titulo;
		string autor;
		int nPag;
	
	public:
		Livro();
		Livro(string _titulo, string _autor, int _nPag);
		
		string getTitulo();
		string getAutor();
		int getNpag();
		
		void setTitulo(string _titulo);
		void setAutor(string _autor);
		void setNpag (int _nPag);
		
};