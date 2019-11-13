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

//permet de recuperer le champs nom
string Client::getNom(){

	return m_nom;
}

//permet de recuperer le champs prenom
string Client::getPrenom(){

	return m_prenom;
}

//permet de recuperer le champs ID
string Client::getID(){

	return m_ID;
}

//permet de recuperer le champs reservation
int Client::getReservation(){

	return m_reservation;
}

//permet de modifier tous les champs d'un client
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


