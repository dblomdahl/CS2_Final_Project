#ifndef _SWITCH_H_
#define _SWITCH_H_

#include "switch.h"
#include "bikingtrip.h"
#include "hikingtrip.h"
#include "trip.h"
#include "iceclimbingtrip.h"
#include "climbingtrip.h"
#include <vector>
#include <string>
#include <iostream>

void BikeSwitch();
string AskForLocation();
int AskForDays();
double AskForMiles();
bool AskForListServed();
bool AskForMultipitch();
void CountRating(int ratingValue, int& easyCount, int& activeCount, int& adventurousCount, int& epicCount, string tripType);
string CheckForNoTrips(int size, string tripType);

#endif