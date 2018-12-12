#include "bikingtrip.h"
#include "hikingtrip.h"
#include "trip.h"
#include "iceclimbingtrip.h"
#include "climbingtrip.h"
#include "backpackingtrip.h"
#include "switch.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main(){
        char addTrip = 'y';
        int tripSwitch = 0;
        int easyCount = 0;
        int activeCount = 0;
        int adventurousCount = 0;
        int epicCount = 0;
        vector<HikingTrip> hikeTrips;
        vector<BackpackingTrip> backpackTrips;
        vector<BikingTrip> bikeTrips;
        vector<ClimbingTrip> climbTrips;
        vector<IceClimbingTrip> iceClimbTrips;
        bool NoChosen = false;
// DO-WHILE LOOP TO ADD TRIPS
        do{
            char addTrip;
            cout << "What kind of trip you would like to add?" << endl;
            cout << "1 Hiking Trip" << endl << "2 Backpacking Trip" << endl << "3 Biking Trip" << endl << "4 Climbing Trip" << endl << "5 Ice Climbing Trip" << endl;
            cout << "'n' if you have no more trips to add" << endl;
            cin >> addTrip;         // User inputs a character of 1, 2, 3, 4, 5, or 'n'
            if (addTrip == '1'){ cout << "Choice is hiking" << endl;
                double miles1;
                miles1 = AskForMiles("hiking");
                string location1;
                location1 = AskForLocation("hiking");
                hikeTrips.push_back( HikingTrip(location1, miles1));
                } 
            else if (addTrip == '2'){ cout << "Choice is backpacking" << endl; 
                int days2;
                days2 = AskForDays("backpacking");
                double miles2;
                miles2 = AskForMiles("backpacking");
                string location2;
                location2 = AskForLocation("backpacking");
                backpackTrips.push_back( BackpackingTrip(days2, location2, miles2));
                } 
            else if (addTrip == '3'){ cout << "Choice is biking" << endl;
                int days3;
                days3 = AskForDays("biking");
                bool liftserved3;
                liftserved3 = AskForListServed();
                string location3;
                location3 = AskForLocation("biking");
                bikeTrips.push_back( BikingTrip(days3, location3, liftserved3));
                }
            else if (addTrip == '4'){ cout << "Choice is climbing" << endl;
                int days4;
                days4 = AskForDays("climbing");
                bool multipitch4;
                multipitch4 = AskForMultipitch();
                string location4;
                location4 = AskForLocation("climbing");
                climbTrips.push_back( ClimbingTrip(days4, location4, multipitch4)); 
                }
            else if (addTrip == '5'){ cout << "Choice is ice climbing" << endl;
                int days5;
                days5 = AskForDays("ice climbing");
                string location5;
                location5 = AskForLocation("ice climbing");
                iceClimbTrips.push_back( IceClimbingTrip(days5, location5));
                }
            else if(addTrip == 'n'){        // ends the do-while loop is 'n' is inputted
                cout << "No more trips to add" << endl;
                NoChosen = true;
            }
            else{ cout << "Invalid. Choose Another Number"; 
                } 
        
        }while(NoChosen == false);
// CALCULATE RATING
        for(int i = 0; i < hikeTrips.size(); i++){
            hikeTrips[i].CalculateRating();     //Calculates the rating using the unique HikingTrip CalculateRating function
            CountRating(hikeTrips[i].GetRatingValue(), easyCount, activeCount, adventurousCount, epicCount, "hiking");} //Adds 1 to the intensityCount variable so we know how many of each intensity there are
        for(int i = 0; i < backpackTrips.size(); i++){
            backpackTrips[i].CalculateRating();
            CountRating(backpackTrips[i].GetRatingValue(), easyCount, activeCount, adventurousCount, epicCount, "backpacking");}
        for(int i = 0; i < bikeTrips.size(); i++){
            bikeTrips[i].CalculateRating();
            CountRating(bikeTrips[i].GetRatingValue(), easyCount, activeCount, adventurousCount, epicCount, "biking");}
        for(int i = 0; i < climbTrips.size(); i++){
            climbTrips[i].CalculateRating();
            CountRating(climbTrips[i].GetRatingValue(), easyCount, activeCount, adventurousCount, epicCount, "climbing");}
         for(int i = 0; i < iceClimbTrips.size(); i++){
            iceClimbTrips[i].CalculateRating();
            CountRating(iceClimbTrips[i].GetRatingValue(), easyCount, activeCount, adventurousCount, epicCount, "ice climbing");}
// OUTPUT TO TERMINAL
        for(int i = 0; i < hikeTrips.size(); i++){
            cout << hikeTrips[i];}                      //using overloaded operator <<
        for(int i = 0; i < backpackTrips.size(); i++){
            cout << backpackTrips[i];}                  //using overloaded operator <<
        for(int i = 0; i < bikeTrips.size(); i++){
            cout << bikeTrips[i];}                      //using overloaded operator <<
        for(int i = 0; i < climbTrips.size(); i++){
            cout << climbTrips[i];}                     //using overloaded operator <<
        for(int i = 0; i < iceClimbTrips.size(); i++){
            cout << iceClimbTrips[i];        }          //using overloaded operator <<
//  OUTPUT TO TXT FILE
        ofstream fout;
        fout.open("trips.txt");
        if(fout.fail() ) {
            cout << "can't open file" << endl;
            return 0;
        }
        for(int i = 0; i < hikeTrips.size(); i++){
            fout << hikeTrips[i];       }          //using overloaded operator <<
        for(int i = 0; i < backpackTrips.size(); i++){
            fout << backpackTrips[i];   }          //using overloaded operator <<
        for(int i = 0; i < bikeTrips.size(); i++){
            fout << bikeTrips[i];       }          //using overloaded operator <<
        for(int i = 0; i < climbTrips.size(); i++){
            fout << climbTrips[i];      }          //using overloaded operator <<
        for(int i = 0; i < iceClimbTrips.size(); i++){
            fout << iceClimbTrips[i];   }          //using overloaded operator <<
        fout << endl;
        fout << "Easy trips: " << easyCount << endl; //prints amount of Easy-level trips
        fout << "Active trips: " << activeCount << endl; //prints amount of Active-level trips
        fout << "Adventurous trips: " << adventurousCount << endl; //prints amount of Adventurous-level trips
        fout << "Epic trips: " << epicCount << endl;  //prints amount of Epic-level trips
        fout << "Total trips: " << easyCount + activeCount + adventurousCount + epicCount << endl; //prints total amount of trips
        fout.close();
    return 0;
}