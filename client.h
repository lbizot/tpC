#define _client_h
#include <string>
using namespace std;
class Client {

	public :

	//Definition du constructeur
	Client(string ID , string nom , string prenom , int reservation);
	
	// fonction getter Nom
	string getNom();

	// fonction getter Prenom
	string getPrenom();

	// fonction getter ID
	string getID();

	// fonction getter Reservation
	int getReservation();

	// fonction Setter Client
	void setClient(string ID , string nom , string prenom , int reservation);









	private:

		 string m_ID;

		 string m_nom;

		 string m_prenom;

		 int m_reservation;


};