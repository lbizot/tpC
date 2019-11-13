#include <iostream>
#include <cstdlib>
#include "client.h"
#include <string>
using namespace std;

int main(){

//Information client1 avant modification
Client client1= Client("Poufssoufle","Poudlard","Hagrid",1234);


//Information client1 apres modification
client1.setClient("Grifondor","Noobie","Potter",5678);

// Affichage info client 1 apres modif sur console 
cout<< "les informations du client sont " << client1.getID() << " " << client1.getNom() << " " << client1.getPrenom()<<" "<<client1.getReservation()<<endl;


}
