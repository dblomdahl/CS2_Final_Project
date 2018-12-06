#ifndef _HIKINGTRIP_H_
#define _HIKINGTRIP_H_

#include "trip.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class HikingTrip : public Trip{
    
    private: 
    int _days;
    string _location;
    double miles;

    public: 
    HikingTrip();
    HikingTrip(int days, string location, double miles);

    void SetDays();
    void SetLocation();
    int GetDays();
    string GetLocation();
    void CalculateRating();
    void GetMulitpitch();


};

#endif
