using namespace std;
#include <string>
#include <array>

class Hotel{

public:

	Hotel(string id,string nom,string ville,Chambre tab_chambre)
	string getId();
	string getVille();
	string getNom();
	Chambre getTabChambre(int indice);




private:
	Chambre tab_chambre
	string id;
	string nom;
	string ville;
	array<Chambre,20> tab_chambre;



};