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
    // string switch_Location;
    // int switch_Days;
    // bool switch_Liftserved;

    // cout << "Where is the bike location?" << endl;
    // cin >> switch_Location;
    // cout << "How many days will you bike for?" << endl;
    // cin >> switch_days;
    // cout << "Enter 1 if the bike trip is lift-served, 0 if not. " << endl;
    // cin >> switch_liftserved;
    // bikeTrips.push_back( BikingTrip(switch_days, switch_Location, switch_liftserved));

}

string AskForLocation(){
    string switch_Location;
    cout << "Where is the trip location?" << endl;
    cin >> switch_Location;
    return switch_Location;
}
int AskForDays(){
    int switch_Days;
    cout << "How many days is the trip?" << endl;
    cin >> switch_Days;
    return switch_Days;
}

double AskForMiles(){
    double switch_Miles;
    cout << "How many miles is the trip?" << endl;
    cin >> switch_Miles;
    return switch_Miles;
}

bool AskForListServed(){
    bool switch_Liftserved;
    cout << "Enter 1 if the bike trip is lift-served, 0 if not. " << endl;
    cin >> switch_Liftserved;
    return switch_Liftserved;
}

bool AskForMultipitch(){
       bool switch_Multipitch;
    cout << "Enter 1 if the climbing trip is multipitch, 0 if not. " << endl;
    cin >> switch_Multipitch;
    return switch_Multipitch;
}

// void CountRating(int ratingValue){
//     switch(ratingValue){
//         case 1: {easyCount++;}
//         case 2: {activeCount++;}
//         case 3: {adventurousCount++;}
//         case 4: {epicCount};
//     }





