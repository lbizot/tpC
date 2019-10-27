#include "reservation.h"
#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

Reservation reservation1= Reservation("HOTEL1","IDChambreC1","ReservationC1","Client1",330.50,12/04/19,15/04/19);



reservation1.setRESERVATION("HOTELmod1","IDChambreC1mod","ReservationC1mod","Client1mod",montantTOT,formatDEBUT[],formatFIN[]);

cout<< "les informations de la reservation sont " << reservation1.getIDHOTEL() << " " << reservation1.getIDCHAMBRE() << " " << reservation1.getIDCLIENT()<<" "<<reservation1.getIDRESERVATION()<<" "<<reservation1.TOTAL(int nbreNUITS, double prixNUITS)<<" "<<reservation1.DateDEBUT(_timeDebut,timeInfoDebut)<<" "<<reservation1.DateFIN(_timeFin, timeInfoFin)<<endl;


}
