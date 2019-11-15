#include "reservation.h"
#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

Reservation reservation1= Reservation("HOTEL1","IDChambreC1","ReservationC1","Client1",330.50);



reservation1.setRESERVATION("HOTELmod1","IDChambreC1mod","ReservationC1mod","Client1mod",montantTOT);

cout<< "les informations de la reservation sont " << reservation1.getIDHOTEL() << " " << reservation1.getIDCHAMBRE() << " " << reservation1.getIDCLIENT()<<" "<<reservation1.getIDRESERVATION()<<" "<<reservation1.TOTAL(int nbreNUITS, double prixNUITS)<<endl;


}
