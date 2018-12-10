// #include "iceclimbingtrip.h"
// #include "trip.h"
// #include <iostream>
// #include <string>
// using namespace std;

// int BackpackingTrip :: GetDays(){
//     return _days;
// }
// string BackpackingTrip :: GetLocation(){
//     return _location;
// }
// string BackpackingTrip :: GetRatingString(){
//     return _ratingString;
// }
// int BackpackingTrip :: GetRatingValue(){
//     return _ratingValue;
// }
// void BackpackingTrip:: CalculateRating(){
//     double count = 0;
//     count += _miles * 3;
//     count += _days * 10;

//     if(count >= 90){
//        _ratingString = "Epic";
//        _ratingValue = 4;
//     }
//     else if(count >= 60){
//         _ratingString = "Adventurous";
//        _ratingValue = 3;
//     }
//     else if(count >= 30){
//         _ratingString = "Active";
//        _ratingValue = 2;
//     }
//     else {
//         _ratingString = "Easy-Going";
//         _ratingValue = 1;
//     }
// }