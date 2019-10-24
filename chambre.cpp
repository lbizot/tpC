using namespace std;
#include <iostream>
#include "chambre.h"
#include <string>

Chambre::Chambre(int id,string type,int prix){

	m_prix=prix;
	m_id=id;
	m_type=type;

}

int Chambre::getId(){

	return m_id;
}

int Chambre::getPrix(){

	return m_prix;
}

string Chambre::getType(){

	return m_type;
}

void Chambre::setChambre(int id,string type,int prix){

	m_prix=prix;
	m_id=id;
	m_type=type;

}
