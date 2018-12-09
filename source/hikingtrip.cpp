#include "hikingtrip.h"
#include "trip.h"
#include <iostream>
#include <string>
using namespace std;


string HikingTrip :: GetLocation(){
    return _location;
}
string HikingTrip :: GetRatingString(){
    return _ratingString;
}
int HikingTrip :: GetRatingValue(){
    return _ratingValue;
}
void HikingTrip:: CalculateRating(){
    double count = 0;
    count = _miles * 5;

    if(count >= 90){
       _ratingString = "Epic";
       _ratingValue = 4;
    }
    else if(count >= 60){
        _ratingString = "Adventurous";
       _ratingValue = 3;
    }
    else if(count >= 30){
        _ratingString = "Active";
       _ratingValue = 2;
    }
    else {
        _ratingString = "Easy-Going";
        _ratingValue = 1;
    }
}
