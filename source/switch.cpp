#include "switch.h"
#include "bikingtrip.h"
#include "hikingtrip.h"
#include "trip.h"
#include "iceclimbingtrip.h"
#include "climbingtrip.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

void BikeSwitch(){
    string switch_Location;
    int switch_days;
    bool switch_liftserved;

    cout << "Where is the bike location?" << endl;
    cin >> switch_Location;
    cout << "How many days will you bike for?" << endl;
    cin >> switch_days;
    cout << "Enter 1 if the bike trip is lift-served, 0 if not. " << endl;
    cin >> switch_liftserved;

    // bikeTrips.push_back( BikingTrip(switch_days, switch_Location, switch_liftserved));
}
