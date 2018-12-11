#ifndef _HIKINGTRIP_H_
#define _HIKINGTRIP_H_

#include "trip.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class HikingTrip : public Trip{
    
    private: 
    string _location;
    double _miles;
    string _ratingString;
    int _ratingValue;

    public: 
    HikingTrip();
    HikingTrip(string location, double miles){
        _location = location;
        _miles = miles;
    }

    string GetLocation();
    void CalculateRating();
    string GetRatingString();
    int GetRatingValue();

    friend ostream &operator<<( ostream &output, HikingTrip T){ 
        output << "Hiking trip to " << T.GetLocation() << " is " << T.GetRatingString() << endl;
        return output;
    }

    


};

#endif
