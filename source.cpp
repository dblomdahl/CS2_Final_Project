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

        // BikingTrip b1(1,"Silver Mountain", true);
        // BikingTrip b2(4,"Whistler", true);
        // BikingTrip b3(1,"Beacon Hill", false);
        // BikingTrip b4(4, "Priest Lake", false);

        // BikingTrip b1(1,"Silver Mountain", true);
        // BikingTrip b2(4,"Whistler", true);
        // BikingTrip b3(1,"Beacon Hill", false);
        // BikingTrip b4(4, "Priest Lake", false);

//         cout << b1.GetLocation() << endl;
//         b1.CalculateRating();
//         cout << b1.GetRatingString() << endl;
//         cout << b1.GetRatingValue() << endl;
// cout << endl;
//         cout << b2.GetLocation() << endl;
//         b2.CalculateRating();
//         cout << b2.GetRatingString() << endl;
//         cout << b2.GetRatingValue() << endl;
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