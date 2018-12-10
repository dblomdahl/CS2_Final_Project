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
#include <unistd.h>

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
            switch(hikeTrips[i].GetRatingValue()){
                case 1: {easyCount++;}
                case 2: {activeCount++;}
                case 3: {adventurousCount++;}
                case 4: {epicCount++;}
            }
        }
        
        
        for(int i = 0; i < backpackTrips.size(); i++){
            backpackTrips[i].CalculateRating();
            switch(backpackTrips[i].GetRatingValue()){
                case 1: {easyCount++;}
                case 2: {activeCount++;}
                case 3: {adventurousCount++;}
                case 4: {epicCount++;}
            }
        }
        for(int i = 0; i < bikeTrips.size(); i++){
            bikeTrips[i].CalculateRating();
            switch(backpackTrips[i].GetRatingValue()){
                case 1: {easyCount++;}
                case 2: {activeCount++;}
                case 3: {adventurousCount++;}
                case 4: {epicCount++;}
            }
        }
        for(int i = 0; i < climbTrips.size(); i++){
            climbTrips[i].CalculateRating();
            switch(climbTrips[i].GetRatingValue()){
                case 1: {easyCount++;}
                case 2: {activeCount++;}
                case 3: {adventurousCount++;}
                case 4: {epicCount++;}
            }
        }

        for(int i = 0; i < hikeTrips.size(); i++){
            cout << "Hike Trip " << i+1 << ": " << hikeTrips[i].GetLocation() << ", " << hikeTrips[i].GetRatingString() << ", " << hikeTrips[i].GetRatingValue() << endl;  
        }
        for(int i = 0; i < backpackTrips.size(); i++){
            cout << "Backpack Trip " << i+1 << ": " << backpackTrips[i].GetLocation() << ", " << backpackTrips[i].GetRatingString() << ", " << backpackTrips[i].GetRatingValue() << endl;
        }
        for(int i = 0; i < bikeTrips.size(); i++){
            cout << "Bike Trip " << i+1 << ": " << bikeTrips[i].GetLocation() << ", " << bikeTrips[i].GetRatingString() << ", " << bikeTrips[i].GetRatingValue() << endl;
        }
        for(int i = 0; i < climbTrips.size(); i++){
            cout << "Climb Trip " << i+1 << ": " << climbTrips[i].GetLocation() << ", " << climbTrips[i].GetRatingString() << ", " << climbTrips[i].GetRatingValue() << endl;
        }

ofstream fout;
        fout.open("trips.txt");
        if(fout.fail() ) {
            cout << "can't open file" << endl;
            return 0;
        }
         for(int i = 0; i < hikeTrips.size(); i++){
            fout << "Hike Trip " << i+1 << ": " << hikeTrips[i].GetLocation() << ", " << hikeTrips[i].GetRatingString() << ", " << hikeTrips[i].GetRatingValue() << endl;  
        }
        for(int i = 0; i < backpackTrips.size(); i++){
            fout << "Backpack Trip " << i+1 << ": " << backpackTrips[i].GetLocation() << ", " << backpackTrips[i].GetRatingString() << ", " << backpackTrips[i].GetRatingValue() << endl;
        }
        for(int i = 0; i < bikeTrips.size(); i++){
            fout << "Bike Trip " << i+1 << ": " << bikeTrips[i].GetLocation() << ", " << bikeTrips[i].GetRatingString() << ", " << bikeTrips[i].GetRatingValue() << endl;
        }
        for(int i = 0; i < climbTrips.size(); i++){
            fout << "Climb Trip " << i+1 << ": " << climbTrips[i].GetLocation() << ", " << climbTrips[i].GetRatingString() << ", " << climbTrips[i].GetRatingValue() << endl;
        }
        fout << "easy trips: " << easyCount << endl;
        fout << "active trips: " << activeCount << endl;
        fout << "adventurous trips: " << adventurousCount << endl;
        fout << "epic trips: " << epicCount << endl;
        

        
        fout.close();


return 0;
}