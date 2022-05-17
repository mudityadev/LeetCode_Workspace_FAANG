#include<bits/stdc++.h>
using namespace std;


class Person{
public:
    string name;
    Account accountDetails;
    string phone;
};

enum AccountStatus{
    ACTIVE, CLOSED, BLOCKED
}

class HouseKeeper : public Person{
    vector<Room> getRoomServiced(Date date);
};


class Search{
    vector<Room> searchRoom(RoomStyle roomStyle, Date startDate, int duration);
};

class Booking{
    RoomBooking createBooking(Guest guestInfo);
    RoomBooking cancelBooking(int bookingId);
};

class RoomBooking{
    string bookingId;
    Date startDate;
    int durationInDays;
    BookingStatus bookingStatus;
    vector<Guest> guestList;
    vector<Room> roomInfo;
    BaseRoomCharge totalRoomCharges;
};

// Implement Decorators for extraCost and keeping adding if require
// solve the room charge problem -> decorators used


class Guest : public Person{
    Search searchObj;
    Booking bookingObj;

};


class Receptionist : public Person{
    Search searchObj;
    Booking bookingObj;

    checkInGuest(Guest guest, RoomBooking bookingInfo);
    checkOutGuest(Guest guest, RoomBooking bookingInfo);
};

class Admin : public Person{
    void addRoom(Room roomDetail);
    Room deleteRoom(string roomId);
    void editRoom(Room roomDetail);
};





class Account{
    string username;
    string password;
    // enum
    AccountStatus accountStatus;
};






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
};

class HouseKeepingLogs{
    string description;
    Date startDate;
    int duration;
    HouseKeeper housekeeper;

    void addRoom(Room room);
};





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