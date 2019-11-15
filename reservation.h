#define _reservation_h
#include <string>
#include <ctime>
#include "date.h"
using namespace std;
class Reservation {

	public :


	Reservation();

	Reservation(string idHotel , string idChambre , string idReservation , string idClient , 
		double montantTOT, Date dateDebut, Date dateFin);

	string getIdHotel();

	string getIdChambre();

	string getIdReservation();

	string getIdClient();

	double totalAvecRemise(int nbreNUITS , double prixNUITS);

	double totalSansRemise(int nbreNUITS, double prixNUITS);

	void setDateDebut(Date date);

	void setDateFin(Date date);

	void setMontantTOT(double montantTOT);

	double getMontantTOT();

	Date getDateFin();

	Date getDateDebut();

	void setRESERVATION( string idHotel , string idChambre , string idReservation , string idClient , double montantTOT , Date dateDebut , Date dateFin);









	private:

		 string m_idHotel;

		 string m_idChambre;

		 string m_idReservation;

		 string m_idClient; 

		 double m_montantTOT;

		 Date m_dateDebut;

		 Date m_dateFin;


};