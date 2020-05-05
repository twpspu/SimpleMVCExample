// Class ResortReservationRecord
// Original author is and all rights reserved for Andrew Mclain @ SPU ECS

#ifndef RESORTRESERVATIONRECORD_H
#define RESORTRESERVATIONRECORD_H

#include <string>
#include <sstream>

using std::string;

class ResortReservationRecord
{
private:
  // add your private member variables here.
  string customerName;
  int roomType;
  int numNights;
  bool parking;
  double totalCost;

public:
  static const std::string ROOM_NAME[];
  static const double ROOM_RATE_PER_NIGHT[];
  static const double PARKING_PER_NIGHT;

  ResortReservationRecord();
  // add your public member function declarations here.
  string getCustomerName()const;
  void setCustomerName(string name);
  void setRoomType(int num);
  int getNumNights()const;
  void setNumNights(int a);
  bool getParking()const;
  void setParking(bool arg);
  double CalculateCost();
  string CurrentChoice();
};


#endif // RESORTRESERVATIONRECORD_H
