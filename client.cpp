#include "client.h"
#include <string>
using namespace std;


//constructeur de la classe client prenant en paramètre un id,un nom,un prenom et un nombre de reservation déjà effectués
Client::Client(string ID , string nom , string prenom , int reservation){

	m_ID = ID;

	m_nom = nom;

	m_prenom = prenom;

	m_reservation = reservation;
}


string Client::getNom(){

	return m_nom;
}


>>>>>>> 261b702f3fb7ee9be55941df1842fa3ea76c6f83
string Client::getPrenom(){

	return m_prenom;
}


string Client::getID(){

	return m_ID;
}


int Client::getReservation(){

	return m_reservation;
}
<
void Client::setClient( string ID, string nom , string prenom , int reservation){

	m_ID=ID;

	m_nom=nom;

	m_prenom=prenom;

	m_reservation=reservation;
}

void Client::setNom(string nom){

	m_nom=nom;
}

void Client::setID(string id){

	m_ID=id;
}

void Client::setReservation(int reservation){

	m_reservation=reservation;
}

void Client::setPrenom(string prenom){

	m_prenom=prenom;
}


