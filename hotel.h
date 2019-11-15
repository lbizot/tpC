using namespace std;
#include <string>
#include <array>
#include "chambre.h"
#define TAILLETAB 20
class Hotel{

public:

	Hotel(string id,string nom,string ville,Chambre tab_chambre[TAILLETAB]);
	string getId();
	Hotel(string id,string nom,string ville);
	string getVille();
	string getNom();
	Chambre getChambre(int indice);
	void setChambre(int indice,Chambre m_chambre);




private:
	Chambre tab_chambre[TAILLETAB];
	string id;
	string nom;
	string ville;




};