#include <iostream>
#include <cstdlib>
#include "date.h"
using namespace std;

int main(){

Date date1= Date(19,01,2019);

cout<<"la date est"<<date1.getJour()<< " " <<date1.getMois()<< " " <<date1.getAnnee()<<endl;


date1.setDate(12,12,2020);

cout<< "la nouvelle date est" << date1.getJour() << " " << date1.getMois() << " " << date1.getAnnee()<<endl;


}
