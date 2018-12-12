#include "iceclimbingtrip.h"
#include "trip.h"
#include <iostream>
#include <string>
using namespace std;

int IceClimbingTrip :: GetDays(){
    return _days;}
string IceClimbingTrip :: GetLocation(){
    return _location;}
string IceClimbingTrip :: GetRatingString(){
    return _ratingString;}
int IceClimbingTrip :: GetRatingValue(){
    return _ratingValue;}
void IceClimbingTrip:: CalculateRating(){  //Ice climbing trips are always epic
    _ratingString = "Epic";
    _ratingValue = 4;}