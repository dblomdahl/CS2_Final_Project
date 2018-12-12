#include "bikingtrip.h"
#include "trip.h"
#include <iostream>
#include <string>
using namespace std;

int BikingTrip :: GetDays(){
    return _days;}
string BikingTrip :: GetLocation(){
    return _location;}
string BikingTrip :: GetRatingString(){
    return _ratingString;}
int BikingTrip :: GetRatingValue(){
    return _ratingValue;}
void BikingTrip:: CalculateRating(){  // Trip Rating is based on how many points the trip scores (depending on days, miles and liftserved)
    int count = 0;
    if(_days > 1){ count += 20;}
    if(_days > 2){ count += 40;}
    if(_days > 3){ count += 50;}
    if(_liftserved == true){ count += 40;}

    if(count > 90){
       _ratingString = "Epic";
       _ratingValue = 4;
    }
    else if(count > 50){
        _ratingString = "Adventurous";
       _ratingValue = 3;
    }
    else{
        _ratingString = "Active";
       _ratingValue = 2;
    }
   
}
