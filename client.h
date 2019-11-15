#define _client_h
#include <string>
using namespace std;
class Client {

	public :

	//Definition du constructeur
	Client(string id , string nom , string prenom , int reservation);
	
	// fonction getter Nom
	string getNom();

	// fonction getter Prenom
	string getPrenom();

	// fonction getter id
	string getID();

	// fonction getter Reservation
	int getReservation();

	// fonction setter nom 
	void setNom(string nom);

	// fonction setter prenom
	void setPrenom(string prenom);

	// fonction setter id
	void setID(string id);

	// fonction Setter Client
	void setClient(string id , string nom , string prenom , int reservation);

	// fonction setter reservation client 
	void setReservation(int reservation);









	private:

		 string m_id;

		 string m_nom;

		 string m_prenom;

		 int m_reservation;


};