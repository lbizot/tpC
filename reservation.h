#define _reservation_h
#include <string>
#include <ctime>
#include "date.h"
using namespace std;
class Reservation {

	public :


	Reservation();

	Reservation(int idHotel , int idChambre , string idReservation , int idClient , 
		double montantTOT, Date dateDebut, Date dateFin);

	string getIdHotel();

	int getIdChambre();

	string getIdReservation();

	int getIdClient();

	double totalAvecRemise(int nbreNUITS , double prixNUITS);

	double totalSansRemise(int nbreNUITS, double prixNUITS);

	void setRESERVATION( string idHotel , string idChambre , string idReservation , string idClient , double montantTOT , Date dateDebut , Date dateFin);









	private:

		 string m_idHotel;

		 int m_idChambre;

		 string m_idReservation;

		 int m_idClient; 

		 double m_montantTOT;

		 Date m_dateDebut;

		 Date m_dateFin;


};