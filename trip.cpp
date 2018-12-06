#include "trip.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int Trip :: GetDays(){
    return _days;
}

string Trip :: GetLocation(){
    return _location;
}

string Trip :: GetRatingString(){
    return _ratingString;
}

int Trip :: GetRatingValue(){
    return _ratingValue;
}