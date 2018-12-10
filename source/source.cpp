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

        do{
            cout << "Add a trip? y/n" << endl;
            cin >> addTrip;
            if(addTrip == 'n'){
                break;
            }
            cout << "What kind of trip you would like to add?" << endl;
            cout << "1 Hiking Trip" << endl << "2 Backpacking Trip" << endl << "3 Biking Trip" << endl << "4 Climbing Trip" << endl << "5 Ice Climbing Trip" << endl;
            
            cin >> tripSwitch;
            switch(tripSwitch){   
            case 1: { cout << "Choice is hiking" << endl;
                double miles1;
                miles1 = AskForMiles();
                string location1;
                location1 = AskForLocation();
                hikeTrips.push_back( HikingTrip(location1, miles1));
                break; } 
            case 2: { cout << "Choice is backpacking" << endl; 
                int days2;
                days2 = AskForDays();
                double miles2;
                miles2 = AskForMiles();
                string location2;
                location2 = AskForLocation();
                backpackTrips.push_back( BackpackingTrip(days2, location2, miles2));
                break; } 
            case 3: { cout << "Choice is biking" << endl;
                int days3;
                days3 = AskForDays();
                bool liftserved3;
                liftserved3 = AskForListServed();
                string location3;
                location3 = AskForLocation();
                bikeTrips.push_back( BikingTrip(days3, location3, liftserved3));
                break; }
            case 4: { cout << "Choice is climbing" << endl;
                int days4;
                days4 = AskForDays();
                bool multipitch4;
                multipitch4 = AskForMultipitch();
                string location4;
                location4 = AskForLocation();
                climbTrips.push_back( ClimbingTrip(days4, location4, multipitch4));
                break; }
            case 5: { cout << "Choice is ice climbing" << endl;
                break; }
            default: { cout << "Invalid. Choose Another Number"; 
                break; } 
            }
        }while(1 < 2);

        for(int i = 0; i < hikeTrips.size(); i++){
            hikeTrips[i].CalculateRating();
            CountRating(hikeTrips[i].GetRatingValue(), easyCount, activeCount, adventurousCount, epicCount, "hiking");
        }
        for(int i = 0; i < backpackTrips.size(); i++){
            backpackTrips[i].CalculateRating();
            CountRating(backpackTrips[i].GetRatingValue(), easyCount, activeCount, adventurousCount, epicCount, "backpacking");
        }
        for(int i = 0; i < bikeTrips.size(); i++){
            bikeTrips[i].CalculateRating();
            CountRating(backpackTrips[i].GetRatingValue(), easyCount, activeCount, adventurousCount, epicCount, "biking");
        }
        for(int i = 0; i < climbTrips.size(); i++){
            bikeTrips[i].CalculateRating();
            CountRating(backpackTrips[i].GetRatingValue(), easyCount, activeCount, adventurousCount, epicCount, "climbing");
        }

        for(int i = 0; i < hikeTrips.size(); i++){
            cout << "Hike Trip " << i+1 << ": " << hikeTrips[i].GetLocation() << ", " << hikeTrips[i].GetRatingString() << endl;  
        }
        for(int i = 0; i < backpackTrips.size(); i++){
            cout << "Backpack Trip " << i+1 << ": " << backpackTrips[i].GetLocation() << ", " << backpackTrips[i].GetRatingString() << endl;
        }
        for(int i = 0; i < bikeTrips.size(); i++){
            cout << "Bike Trip " << i+1 << ": " << bikeTrips[i].GetLocation() << ", " << bikeTrips[i].GetRatingString() << endl;
        }
        for(int i = 0; i < climbTrips.size(); i++){
            cout << "Climb Trip " << i+1 << ": " << climbTrips[i].GetLocation() << ", " << climbTrips[i].GetRatingString() << endl;
        }

        cout << "Hiking trips size is " << hikeTrips.size() << endl;

ofstream fout;
        fout.open("trips.txt");
        if(fout.fail() ) {
            cout << "can't open file" << endl;
            return 0;
        }
         for(int i = 0; i < hikeTrips.size(); i++){
            // fout << CheckForNoTrips(hikeTrips.size(), "hiking");
            fout << "Hike Trip " << i+1 << ": " << hikeTrips[i].GetLocation() << ", " << hikeTrips[i].GetRatingString() << endl;  
        }
        for(int i = 0; i < backpackTrips.size(); i++){
            // fout << CheckForNoTrips(backpackTrips.size(), "backpacking");
            fout << "Backpack Trip " << i+1 << ": " << backpackTrips[i].GetLocation() << ", " << backpackTrips[i].GetRatingString() << endl;
        }
        for(int i = 0; i < bikeTrips.size(); i++){
            // fout << CheckForNoTrips(bikeTrips.size(), "biking");
            fout << "Bike Trip " << i+1 << ": " << bikeTrips[i].GetLocation() << ", " << bikeTrips[i].GetRatingString() << endl;
        }
        for(int i = 0; i < climbTrips.size(); i++){
            // fout << CheckForNoTrips(climbTrips.size(), "climbing");
            fout << "Climb Trip " << i+1 << ": " << climbTrips[i].GetLocation() << ", " << climbTrips[i].GetRatingString() << endl;
        }
        fout << endl;
        fout << "Easy trips: " << easyCount << endl;
        fout << "Active trips: " << activeCount << endl;
        fout << "Adventurous trips: " << adventurousCount << endl;
        fout << "Epic trips: " << epicCount << endl;
        fout << "Total trips: " << easyCount + activeCount + adventurousCount + epicCount << endl;
        fout.close();


return 0;
}