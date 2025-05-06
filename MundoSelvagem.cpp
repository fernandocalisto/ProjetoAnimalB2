#include <iostream>
#include <locale>
#include "Cao.h"
#include "Gato.h"
#include "Cabra.h"
#include "Animal.h"
#include "CaoDoente.h"
void showAnimal(Animal & animalF){
	cout << "O nome do Animal é: " << animalF.getNome() << endl;
	cout << "A Família do Animal é: " << animalF.getFamilia() << endl;
	cout << "A Raça do Animal é: " << animalF.getRaca() << endl;
	cout << "O Sexo é: " << animalF.getSexo() << endl;
	animalF.fale();
}
int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "PORTUGUESE");
	
	Cao caof;
	caof.setNome("Bidu");
	caof.setFamilia("Canina");
	caof.setRaca("Azul");
	caof.setSexo('M');
	caof.setVoz("AU AU AU!!! ");
	showAnimal(caof);
	
	Gato gatof;
	
	gatof.setNome("Mingau");
	gatof.setFamilia("Felina");
	gatof.setRaca("Branco");
	gatof.setSexo('M');
	gatof.setVoz("MIAAAAAAAAAAAAAAAUUUU!!!");
	showAnimal(gatof);
	
	Cabra cabraf;
	
	cabraf.setNome("Goat");
	cabraf.setFamilia("Cabrón");
	cabraf.setRaca("Cabrito");
	cabraf.setSexo('M');
	cabraf.setVoz("BÉééééeééé!!!");
	
	showAnimal(cabraf);
	
	CaoDoente caod;
	
	caod.setNome("Miserável");
	caod.setFamilia("Canino");
	caod.setRaca("Lascado");
	caod.setSexo('M');
	caod.setVoz("AAAAAAAAINNNNNNNNNNNN AAAAAAAAAAAAAAAAAIIIIIIIN AAAAAAAAAAAAAAAAAIIIIIIN !!!");
	
	showAnimal(caod);
	return 0;
}
