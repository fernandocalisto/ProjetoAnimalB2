#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal
{
private:
    string nome;
    string familia;
    string raca;
    char sexo;
    string voz;

public:
    void setNome(string nome);
    string getNome();
    void setFamilia(string familia);
    string getFamilia();
    void setRaca(string raca);
    string getRaca();
    void setSexo(char sexo);
    char getSexo();
    void setVoz(string voz);
    string getVoz();
    void fale();

protected:
    virtual string emitaSomFala();
};

#endif

