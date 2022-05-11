#include<bits/stdc++.h>
using namespace std;

class Hotel{
public:
    string name;
    int id;
    Location hotelLocation;
    vector<Room> roomList;
};
class Room{
public:
    string roomNumber;
    RoomStyle roomStyle;
    RoomStatus roomStatus;
    double bookingPrice;
    vector<RoomKey> roomKeys;
    vector<HouseKeepingLogs> houseKeepingLogs;
};

enum RoomStyle {STANDARD, DELUX, FAMILY_SUITE};
enum RoomStatus {
    AVAILABLE, NOT_AVAILABLE, REVERSED, OCCUPIED, SERVICE_IN_PROGRESS
};

class RoomKey{
    string KeyId;
    string barCode;
    Date issuedDate;
    bool isActive;
    bool isMaster;

    void assignRoom(Room room);
}


class Location{
public:
    int pin;
    string Street;
    string area;
    string city;
    string country;
};




int main()
{
    
}