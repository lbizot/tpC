#include "client.h"
#include <string>
using namespace std;

Client::Client(string ID , string nom , string prenom , int reservation){

	m_ID = ID;

	m_nom = nom;

	m_prenom = prenom;

	m_reservation = reservation;
}

string Client::getNom(){

	return m_nom;
}

string Client::getPrenom(){

	return m_prenom;
}

string Client::getID(){

	return m_ID;
}

int Client::getReservation(){

	return m_reservation;
}

void Client::setClient( string ID, string nom , string prenom , int reservation){

	m_ID=ID;

	m_nom=nom;

	m_prenom=prenom;

	m_reservation=reservation;
}

