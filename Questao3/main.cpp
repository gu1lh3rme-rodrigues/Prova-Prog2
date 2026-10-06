#include <iostream>
#include "Carro.h"
#include "Movimento.h"
#include "TesteSobre.cpp"
#include "Teste.cpp"
#include <string>


using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Teste *t1= new Teste();
	Teste *t2= new TesteSobre();
	Movimento *move = new Movimento("Marea", "98", 100, 2, 70);
	
	
	cout <<"Radar Regional" << endl;
	cout <<"Carro: "<< move->getMarca() << endl;
	cout <<"Modelo: "<< move->getModelo() << endl;
	cout <<"Velocidade: "<< move->getVelocidade() << endl;
	cout << "Limite de Velocidade: 90km/h" << endl;
	
	if (move->getVelocidade()> 90){
		t1->Desaceleram();
		
		
	}
	else if (move->getVelocidade()<50){
		t1->Aceleram();
	}

	
	
	/*t1->Aceleram();
	cout <<"\n" <<endl;
	t2->Aceleram();
	*/
	
	return 0;
}



/*Implemente uma classe chamada “Carro” com atributos 
para armazenar a marca, o modelo e a velocidade atual do
carro. Adicione métodos para acelerar, frear e 
exibir a velocidade atual. Desenvolva métodos com 
sobrecarga. Crie objeto na classe main, 
inicialize valores e realize os testes de acelerar, 
frear e exibir a velocidade atual na tela do
usuário.*/