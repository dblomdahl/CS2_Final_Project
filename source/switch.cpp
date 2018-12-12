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

string AskForLocation(string tripType){
    string switch_Location;
    cout << "Where is the " << tripType << " trip location?" << endl;
    // getline(cin, switch_Location);       // I tried to include this line so you could enter in location with spaces but
                                            // it never helped at all eg) "Smith Rock" instead of "SmithRock"
    cin >> switch_Location;
    return switch_Location;
}
int AskForDays(string tripType){
    int switch_Days;
    cout << "How many days is the " << tripType << " trip?" << endl;
    cin >> switch_Days;
    return switch_Days;
}
double AskForMiles(string tripType){
    double switch_Miles;
    cout << "How many miles is the " << tripType << " trip?" << endl;
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
void CountRating(int ratingValue, int& easyCount, int& activeCount, int& adventurousCount, int& epicCount, string tripType){
        if(ratingValue == 1){easyCount++;}
        else if(ratingValue == 2){activeCount++;}
        else if(ratingValue == 3){adventurousCount++;}
        else if(ratingValue == 4){epicCount++;}
        else { cout << "No " << tripType << " trips." << endl;}
}




