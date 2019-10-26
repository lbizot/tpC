#include <iostream>
#include <cstdlib>
#include "client.h"
#include <string>
using namespace std;

int main(){

Client client1= Client("Poufssoufle","Poudlard","Hagrid",1234);



client1.setClient("Grifondor","Noobie","Potter",5678);

cout<< "les informations du client sont " << client1.getID() << " " << client1.getNom() << " " << client1.getPrenom()<<" "<<client1.getReservation()<<endl;


}
