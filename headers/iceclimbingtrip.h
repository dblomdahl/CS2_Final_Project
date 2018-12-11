#ifndef _ICECLIMBINGTRIP_H_
#define _ICECLIMBINGTRIP_H_

#include "trip.h"

class IceClimbingTrip : public Trip{
    
    private: 
    int _days;
    string _location;
    string _ratingString;
    int _ratingValue;

    public: 
    IceClimbingTrip();
    IceClimbingTrip(int days, string location){
        _days = days;
        _location = location;
    }

    int GetDays();
    string GetLocation();
    void CalculateRating();
    int GetRatingValue();
    string GetRatingString();
    friend ostream &operator<<( ostream &output, IceClimbingTrip T ) { 
        output << "Ice Climbing trip to " << T.GetLocation() << " is " << T.GetRatingString() << endl;
         return output;
    }
};

#endif