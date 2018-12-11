#ifndef _CLIMBINGTRIP_H_
#define _CLIMBINGTRIP_H_

#include "trip.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class ClimbingTrip : public Trip{
    
    private: 
    int _days;
    string _location;
    bool _multipitch;
    int _ratingValue;
    string _ratingString;

    public: 
    ClimbingTrip();
    ClimbingTrip(int days, string location, bool multipitch){
        _days = days;
        _location = location;
        _multipitch = multipitch;
    }

    void SetDays();
    void SetLocation();
    int GetDays();
    string GetLocation();
    void CalculateRating();
    void GetMulitpitch();
    string GetRatingString();
    int GetRatingValue();
    friend ostream &operator<<( ostream &output, ClimbingTrip T ) { 
        output << "Climbing trip to " << T.GetLocation() << " is " << T.GetRatingString() << endl;
         return output;
    }
};

#endif