using namespace std;
#include <string>


class Chambre {

public:

	Chambre(int id, string type ,int prix);
	
	int getPrix();
	string getType();
	int getId();

	void setPrix(int prix);
	void setType(string type);
	void setId(int id);
	void setChambre(int id,string type,int prix);


private:

	int m_prix;
	string m_type;
	int m_id;

};