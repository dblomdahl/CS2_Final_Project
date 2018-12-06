#include "bikingtrip.h"
#include "hikingtrip.h"
#include "trip.h"
#include "iceclimbingtrip.h"
#include "climbingtrip.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(){
        char addTrip = 'y';
        int tripSwitch = 0;
        vector<BikingTrip> bikeTrips;

        do{
            cout << "Add a trip? y/n" << endl;
            cin >> addTrip;
            if(addTrip == 'n'){
                break;
            }
            cout << "What kind oftrip you would like to add?" << endl;
            cout << "1 Hiking Trip" << endl << "2 Backpacking Trip" << endl << "3 Biking Trip" << endl << "4 Climbing Trip" << endl << "5 Ice Climbing Trip" << endl;
            cin >> tripSwitch;
            switch(tripSwitch){
                
        case 1: cout << "Choice is hiking" << endl;
            break; 
        case 2: cout << "Choice is backpacking" << endl; 
            break; 
        case 3: cout << "Choice is biking" << endl;

            bikeTrips.push_back( BikingTrip(4,"Whistler", true));

            break; 
        case 4: cout << "Choice is climbing" << endl;
            break;
        case 5: cout << "Choice is ice climbing" << endl;
            break;
       default: cout << "Invalid. Choose Another Number"; 
                break;   
            }
            

        }while(1 < 2);

        bikeTrips.push_back( BikingTrip(1,"Silver Mountain", true));

        cout << "Days: " << bikeTrips[0].GetDays() << endl;
        cout << "Days: " << bikeTrips[0].GetLocation() << endl;
        cout << "Days: " << bikeTrips[1].GetDays() << endl;
        cout << "Days: " << bikeTrips[1].GetLocation() << endl;
 

        // BikingTrip b1(1,"Silver Mountain", true);
        // BikingTrip b2(4,"Whistler", true);
        // BikingTrip b3(1,"Beacon Hill", false);
        // BikingTrip b4(4, "Priest Lake", false);

        // BikingTrip b1(1,"Silver Mountain", true);
        // BikingTrip b2(4,"Whistler", true);
        // BikingTrip b3(1,"Beacon Hill", false);
        // BikingTrip b4(4, "Priest Lake", false);

        cout << bikeTrips[0].GetLocation() << endl;
        bikeTrips[0].CalculateRating();
        cout << bikeTrips[0].GetRatingString() << endl;
        cout << bikeTrips[0].GetRatingValue() << endl;
        cout << endl;
        cout << bikeTrips[1].GetLocation() << endl;
        bikeTrips[1].CalculateRating();
        cout << bikeTrips[1].GetRatingString() << endl;
        cout << bikeTrips[1].GetRatingValue() << endl;
// cout << endl;
//         cout << b3.GetLocation() << endl;
//         b3.CalculateRating();
//         cout << b3.GetRatingString() << endl;
//         cout << b3.GetRatingValue() << endl;
// cout << endl;
//         cout << b4.GetLocation() << endl;
//         b4.CalculateRating();
//         cout << b4.GetRatingString() << endl;
//         cout << b4.GetRatingValue() << endl;



return 0;
}