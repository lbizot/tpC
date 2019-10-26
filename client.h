#define _client_h
#include <string>
using namespace std;
class Client {

	public :

	Client(string ID , string nom , string prenom , int reservation);

	string getNom();

	string getPrenom();

	string getID();

	int getReservation();

	void setClient(string ID , string nom , string prenom , int reservation);









	private:

		 string m_ID;

		 string m_nom;

		 string m_prenom;

		 int m_reservation;


};