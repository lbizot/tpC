
#define _date_h

class Date {

	public :

	Date(int jour , int mois , int annee);

	int getJour();

	int getMois();

	int getAnnee();

	void setDate(int jour , int mois , int annee);

	void setJour(int jour);

	void setMois(int mois);

	void setAnnee(int annee);









	private:

		 int m_jour;

		 int m_mois;

		 int m_annee;


};