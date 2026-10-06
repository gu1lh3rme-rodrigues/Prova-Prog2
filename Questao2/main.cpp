#include <iostream>
#include "Acesso.h"

int Acesso = 0;


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Livro *livro = new Livro("A", "Andre", 50);
	
	cout << "-----Livraria-----" << endl;
	cout << "Titulo: " << livro->getTitulo() << endl;
	cout << "Autor: " << livro->getAutor()<< endl;
	cout << "Numero de Paginas: " << livro->getNpag()<< endl;
	
	cout << "\n\n|||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
	
	cout << "Solicitar Livro? : "<< endl;
	if (int Acesso = 0){
		cout << "Livro na estante" << endl;
	}
	else if(Acesso = 1){
		cout <<"Livro ja solicitado, aguarde o retorno..." << endl;
	}
	
	else{
		cout << "Erro!" << endl;
	}
	
	
	//Queria arrumar esse if/else mas tenho que terminar as outras tbm :p
		
	
	
	return 0;
}