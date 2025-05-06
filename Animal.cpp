#include "Animal.h"
#include <iostream>
using namespace std;

void Animal::setNome(string nome) { this->nome = nome; }
string Animal::getNome() { return this->nome; }

void Animal::setFamilia(string familia) { this->familia = familia; }
string Animal::getFamilia() { return this->familia; }

void Animal::setRaca(string raca) { this->raca = raca; }
string Animal::getRaca() { return this->raca; }

void Animal::setSexo(char sexo) { this->sexo = sexo; }
char Animal::getSexo() { return this->sexo; }

void Animal::setVoz(string voz) { this->voz = voz; }
string Animal::getVoz() { return this->voz; }

string Animal::emitaSomFala() {
    return "Use uma de minhas classes descendentes.\n";
}

void Animal::fale() {
    cout << emitaSomFala() << endl << endl;
}

