#ifndef _ICECLIMBINGTRIP_H_
#define _ICECLIMBINGTRIP_H_


#include "trip.h"

class IceClimbingTrip : public Trip{
    
    private: 
    int _days;
    string _location;

    public: 
    IceClimbingTrip();
    IceClimbingTrip(int days, string location);

    void SetDays();
    void SetLocation();
    int GetDays();
    string GetLocation();
    void CalculateRating();
};

#endif