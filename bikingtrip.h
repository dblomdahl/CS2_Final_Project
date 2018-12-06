#ifndef _BIKINGTRIP_H_
#define _BIKINGTRIP_H_

#include "trip.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class BikingTrip : public Trip{
    
    private: 
    int _days;
    string _location;
    bool _liftserved;
    string _ratingString;
    int _ratingValue;

    public: 
    BikingTrip();
    BikingTrip(int days, string location, bool liftserved){
        _days = days;
        _location = location;
        _liftserved = liftserved;
    }

  
    int GetDays();
    string GetLocation();
    string GetRatingString();
    int GetRatingValue();
    void CalculateRating();
    void GetLiftServed();
    
};

#endif