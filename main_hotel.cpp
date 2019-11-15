using namespace std;
#include <iostream>
#include <string>
#include "hotel.h"

int main(){

	Chambre  chambre1= Chambre(1,"type1",70);
	Hotel hotel1= Hotel("1","hotel1","dijon");
	hotel1.setChambre(0,chambre1);
	cout << "Le prix de la chambre numéro 1 dans l'hotel 1 est "<< hotel1.getChambre(0).getPrix()<<" " << endl;

	return 0;

}