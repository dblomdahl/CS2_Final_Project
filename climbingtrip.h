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

    public: 
    ClimbingTrip();
    ClimbingTrip(int days, string location);

    void SetDays();
    void SetLocation();
    int GetDays();
    string GetLocation();
    void CalculateRating();
    void GetMulitpitch();
};

#endif