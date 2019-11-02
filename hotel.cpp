using namespace std;
#include <string>
#include "hotel.h"


Hotel::Hotel(string m_id,string m_nom,string m_ville,Chambre m_tab_chambre[TAILLETAB]){

	for(int i=0;i<TAILLETAB;i++){
		tab_chambre[i]=m_tab_chambre[i];
	}

	id=m_id;
	ville=m_ville;
	nom=m_nom;

}

Hotel::Hotel(string m_id,string m_nom,string m_ville){
	id=m_id;
	ville=m_ville;
	nom=m_nom;

}

string Hotel::getId(){

	return id;
}


string Hotel::getNom(){

	return nom;
}

string Hotel::getVille(){

	return ville;
}

Chambre Hotel::getChambre(int indice){

	return tab_chambre[indice];
}

void Hotel::setChambre(int indice,Chambre m_chambre){

	 tab_chambre[indice]=m_chambre;
}