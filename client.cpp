#include "client.h"
#include <string>
using namespace std;


//constructeur de la classe client prenant en paramètre un id,un nom,un prenom et un nombre de reservation déjà effectués
Client::Client(string id , string nom , string prenom , int reservation){

	m_id = id;

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

	return m_id;
}


//Renvoi le numero de reservation du client 



int Client::getReservation(){

	return m_reservation;
}

//Permet de modifier les informations du client

void Client::setClient( string id, string nom , string prenom , int reservation){

	m_id=id;

	m_nom=nom;

	m_prenom=prenom;

	m_reservation=reservation;
}

void Client::setNom(string nom){

	m_nom=nom;
}

void Client::setID(string id){

	m_id=id;
}

void Client::setReservation(int reservation){

	m_reservation=reservation;
}

void Client::setPrenom(string prenom){

	m_prenom=prenom;
}


