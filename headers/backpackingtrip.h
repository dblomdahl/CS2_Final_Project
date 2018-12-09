#ifndef _BACKPACKINGTRIP_H_
#define _BACKPACKINGTRIP_H_

#include "trip.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class BackpackingTrip : public Trip{
    
    private: 
    int _days;
    string _location;
    double _miles;
    string _ratingString;
    int _ratingValue;

    public: 
    BackpackingTrip();
    BackpackingTrip(int days, string location, double miles){
        _days = days;
        _location = location;
        _miles = miles;
    }

    int GetDays();
    string GetLocation();
    double GetMiles();
    void CalculateRating();
    string GetRatingString();
    int GetRatingValue();


};

#endif
