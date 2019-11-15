#include "reservation.h"
#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

Date date1 = Date(10,02,1999);
Date date2=Date(11,02,1999);
Reservation reservation1= Reservation("HOTEL1","IDChambreC1","ReservationC1","Client1",330.50,date1,date2);

cout << "l'ID de la reservation est" << reservation1.getIdReservation()<<endl;


return 0;

}
