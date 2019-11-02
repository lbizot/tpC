#include "client.h"
#include <string>
using namespace std;

Client::Client(string ID , string nom , string prenom , int reservation){

	m_ID = ID;

	m_nom = nom;

	m_prenom = prenom;

	m_reservation = reservation;
}

// Renvoi le nom du client
string Client::getNom(){

	return m_nom;
}

// Renvoi le prenom du client
string Client::getPrenom(){

	return m_prenom;
}

//Renvoi l'ID du client
string Client::getID(){

	return m_ID;
}

//Renvoi le numero de reservation du client 
int Client::getReservation(){

	return m_reservation;
}
//Permet de modifier les informations du client
void Client::setClient( string ID, string nom , string prenom , int reservation){

	m_ID=ID;

	m_nom=nom;

	m_prenom=prenom;

	m_reservation=reservation;
}

