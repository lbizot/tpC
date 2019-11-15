#include "date.h"
#include <iostream>
using namespace std;

Date::Date(int jour , int mois , int annee){
	if ((1<=jour) && (jour<=31))
		m_jour = jour;
	else
		cout<<"Rentrez un jour compris entre 1 et 31"<<endl;
	if ((1<=mois) && (mois<=12))
		m_mois = mois;
	else
		cout<<"Rentrez un mois compris entre 1 et 12"<<endl;
	if ((0<=annee) && (annee<=3000))
		m_annee = annee;
	else 
		cout<<"Veuillez rentrer une année comprise entre 0 et 3000"<<endl;
	

}

Date::Date(){


}


int Date::getJour(){

	return m_jour;
}

int Date::getMois(){

	return m_mois;
}

int Date::getAnnee(){

	return m_annee;
}

void Date::setDate( int jour, int mois , int annee){

	m_jour=jour;

	m_mois=mois;

	m_annee=annee;
}

