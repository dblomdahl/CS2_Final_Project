#include "climbingtrip.h"
#include "trip.h"
#include <iostream>
#include <string>
using namespace std;


string ClimbingTrip :: GetLocation(){
    return _location;
}
string ClimbingTrip :: GetRatingString(){
    return _ratingString;
}
int ClimbingTrip :: GetRatingValue(){
    return _ratingValue;
}
void ClimbingTrip:: CalculateRating(){
    double count = 0;
    count = _days * 40;
    if(_multipitch == true){
        count += 100;
    }
    if(count >= 90){
       _ratingString = "Epic";
       _ratingValue = 4;
    }
    else if(count >= 50){
        _ratingString = "Adventurous";
       _ratingValue = 3;
    }
    else if(count >= 15){
        _ratingString = "Active";
       _ratingValue = 2;
    }
    else {
        _ratingString = "Easy-Going";
        _ratingValue = 1;
    }
}