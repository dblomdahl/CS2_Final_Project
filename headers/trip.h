#ifndef _TRIP_H_
#define _TRIP_H_

#include <vector>
#include <iostream>
#include <string>
using namespace std;

class Trip{
    
    private: 
    int _days;
    string _location;
    string _ratingString;
    int _ratingValue;

    public: 
    Trip(){
        _days = 0;
        _location = "Whitworth University";
        _ratingString = "No trip";
        _ratingValue = 0;
    }
    Trip(int days, string location){
        _days = days;
        _location = location;
    }
    int GetDays();
    string GetLocation();
    string GetRatingString();
    int GetRatingValue();
    void CalculateRating(); 
};

#endif