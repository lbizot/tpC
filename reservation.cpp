#include "reservation.h"
#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

Reservation::Reservation(int idHotel , int idChambre , string idReservation , 
	int idClient , double montantTOT, Date dateDebut, Date dateFin){

	m_idHotel=idHotel;

	m_idChambre = idChambre;

	m_idReservation = idReservation;

	m_idClient = idClient;

	m_dateDebut = dateDebut;

	m_dateFin = dateFin;

	m_montantTOT = montantTOT; 
}

string Reservation::getIdHotel(){

	return m_idHotel;
}

int Reservation::getIdChambre(){

	return m_idChambre;
}

int Reservation::getIdClient(){

	return m_idClient;
}

string Reservation::getIdReservation(){

	return m_idReservation;
}

double Reservation::totalAvecRemise(int nbreNUITS , double prixNUITS){
	
	m_montantTOT=((nbreNUITS*prixNUITS)-((nbreNUITS*prixNUITS)*0.1));

	return m_montantTOT;
}

double Reservation::totalSansRemise(int nbreNUITS, double prixNUITS) {

	m_montantTOT=(nbreNUITS*prixNUITS);

	return  m_montantTOT;

}


void Reservation::setRESERVATION( string idHotel , string idChambre , string idReservation , string idClient , double montantTOT , Date dateDebut , Date dateFin){

	m_idHotel = idHotel;

	idChambre = idChambre;

	m_idReservation = idReservation;

	m_idClient = idClient;


}