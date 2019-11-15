
#define _date_h

class Date {

	public :

	Date();

	Date(int jour , int mois , int annee); //Init du constructeur

	int getJour(); //Init getter jour, affiche le jour

	int getMois(); // Init getter mois , affiche le mois 

	int getAnnee(); // Init getter annee , affiche l'annee 

	void setDate(int jour , int mois , int annee); // Init setter Date , permet de modifier les parametres de date

	void setJour(int jour); 


	void setMois(int mois);

	void setAnnee(int annee);









	private:

		 int m_jour;

		 int m_mois;

		 int m_annee;


};