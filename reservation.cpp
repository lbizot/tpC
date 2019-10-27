#include "reservation.h"
#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

Reservation::Reservation(string IDHOTEL , string IDCHAMBRE , string IDRESERVATION , string IDCLIENT , double montantTOT , char formatDEBUT , char formatFIN ){

	m_IDHOTEL = IDHOTEL;

	m_IDCHAMBRE = IDCHAMBRE;

	m_IDRESERVATION = IDRESERVATION;

	m_IDCLIENT = IDCLIENT;

	m_formatDEBUT = formatDEBUT;

	m_formatFIN = formatFIN;

	m_montantTOT = montantTOT; 
}

string Reservation::getIDHOTEL(){

	return m_IDHOTEL;
}

string Reservation::getIDCHAMBRE(){

	return m_IDCHAMBRE;
}

string Reservation::getIDCLIENT(){

	return m_IDCLIENT;
}

string Reservation::getIDRESERVATION(){

	return m_IDRESERVATION;
}

double Reservation::TOTAL(int nbreNUITS , double prixNUITS){
	
	m_montantTOT=((nbreNUITS*prixNUITS)-((nbreNUITS*prixNUITS)*0.1));

	return m_montantTOT;
}

char Reservation::DateDEBUT(time_t _timeDebut, struct tm timeInfoDebut){

char formatDebut[32];

time(&_timeDebut);

localtime_s(&timeInfoDebut, &_timeDebut);
 
strftime(formatDebut, 32, "%Y-%m-%d %H-%M", &timeInfoDebut);
 
//std::cout << format << std::endl;

}


char Reservation::DateFIN(time_t _timeFin, struct tm timeInfoFin){

char formatFin[32];

time(&_timeFin);

localtime_s(&timeInfoFin, &_timeFin);
 
strftime(formatFin, 32, "%Y-%m-%d %H-%M", &timeInfoFin);
 
//std::cout << format << std::endl;



}


void Reservation::setRESERVATION( string IDHOTEL , string IDCHAMBRE , string IDRESERVATION , string IDCLIENT , double montantTOT , char formatDEBUT , char formatFIN){

	m_IDHOTEL = IDHOTEL;

	m_IDCHAMBRE = IDCHAMBRE;

	m_IDRESERVATION = IDRESERVATION;

	m_IDCLIENT = IDCLIENT;

	m_formatDEBUT = formatDEBUT;

	m_formatFIN = formatFIN;

	m_montantTOT = montantTOT; 
}