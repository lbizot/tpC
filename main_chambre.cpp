using namespace std;
#include <iostream>
#include "chambre.h"

int main(){

	Chambre chambre1= Chambre(1,"double",34);
	cout << " le prix de la chambre est" << chambre1.getPrix() << endl;

	chambre1.setChambre(1,"double",40);
	cout << " le prix de la chambre est" << chambre1.getPrix() << endl;




}