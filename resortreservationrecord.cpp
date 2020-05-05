#include "ResortReservationRecord.h"
#include <string>

using namespace std;

// The following constants are room data for your convenience.
const string ResortReservationRecord::ROOM_NAME[] =
    {"A Standard 2-queen room",
    "An Atrium 2-queen room",
    "A Standard 1-king room",
    "An Atrium 1-king room"};

const double ResortReservationRecord::ROOM_RATE_PER_NIGHT[] =
    { 284.00, 325.00, 290.00, 350.00 };

const double ResortReservationRecord::PARKING_PER_NIGHT = 12.75;

// constructor.
ResortReservationRecord::ResortReservationRecord()
{
  numNights = 0;
  parking = false;
  totalCost = 0;
  roomType = 1;
  customerName = " ";
}

// add your member functions below.
string ResortReservationRecord::getCustomerName()const{
  return customerName;
}
void ResortReservationRecord::setRoomType(int num){
  roomType = num;
}
void ResortReservationRecord::setCustomerName(string name){
  customerName = name;
}
int ResortReservationRecord::getNumNights()const{
  return numNights;
}
void ResortReservationRecord::setNumNights(int a){
  numNights = a;
}
bool ResortReservationRecord::getParking()const{
  return parking;
}
void ResortReservationRecord::setParking(bool arg){
  parking = arg;
}
double ResortReservationRecord::CalculateCost(){
  totalCost = (ROOM_RATE_PER_NIGHT[roomType] *
              numNights);
  if(parking == true){
    totalCost += numNights * PARKING_PER_NIGHT;
  }
  return totalCost;
}
string ResortReservationRecord::CurrentChoice(){
  stringstream ss;
  ss << "Customer name: " << customerName << endl;
  ss << "Room type: " << ROOM_NAME[roomType] << endl;
  ss << "Nights stay: " << numNights << endl;
  ss << "Parking (Y/N): ";
  if(parking == true){
    ss << "Y" << endl;
  }
  else{
    ss << "N" << endl;
  }
  ss << "Total cost: " << CalculateCost();
  return ss.str();
}
