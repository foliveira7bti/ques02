#include <iostream>
#include <string>
#include "agenda.h"

void Agenda::insereContato(std::string nome_ , int idade_ , float altura_)
{
	Pessoa pes(nome_,idade_,altura_);
	for (int i=0; i < MAX_CONTATOS;i++)
	{
		if(m_contatos[i])
		{

		}
	}
}