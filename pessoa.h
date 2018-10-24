#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa
{
private:
	std::string nome;
	int idade;
	double altura;
public:
	Pessoa(std::string nome_, int idade_, double altura_);
	std::string getNome();
	int getIdade();
	double getAltura();
	~Pessoa();
	friend std::ostream&operator<<(std::ostream &o, Pessoa p);
};

#endif