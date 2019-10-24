#include "date.h"

Date::Date(int jour , int mois , int annee){

	m_jour = jour;

	m_mois = mois;

	m_annee = annee;
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

