#include <iostream>
#include <string>
#include "pessoa.h"

//Construtores
Pessoa::Pessoa(std::string nome_, int idade_, double altura_)
{
	nome = nome_;
	idade = idade_;
	altura = altura_;
}

//Destrutores
Pessoa::~Pessoa()
{
	//nothing
}

int Pessoa::getIdade()
{
	return idade;
}

double Pessoa::getAltura()
{
	return altura;
}

std::string Pessoa::getNome()
{
	return nome;
}

std::ostream&operator<<(std::ostream &o, Pessoa p)
{
	o << p.getNome() << "\n" << p.getIdade() << "\n" << p.getAltura() << "\n";
	return o;
}