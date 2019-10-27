#define _reservation_h
#include <string>
#include <ctime>
using namespace std;
class Reservation {

	public :

	Reservation(string IDHOTEL , string IDCHAMBRE , string IDRESERVATION , string IDCLIENT , double montantTOT , char formatDEBUT , char formatFIN );

	string getIDHOTEL();

	string getIDCHAMBRE();

	string getIDRESERVATION();

	string getIDCLIENT();

	double TOTAL(int nbreNUITS , double prixNUITS);

	char DateDEBUT(time_t,struct tm);

	char DateFIN(time_t,struct tm);

	void setRESERVATION(string IDHOTEL , string IDCHAMBRE , string IDRESERVATION , string IDCLIENT , double montantTOT , char formatDEBUT , char formatFIN );









	private:

		 string m_IDHOTEL;

		 string m_IDCHAMBRE;

		 string m_IDRESERVATION;

		 string m_IDCLIENT;

		 char m_formatDEBUT;

		 char m_formatFIN;

		 double m_montantTOT;


};