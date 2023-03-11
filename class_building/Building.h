// Created by konstantin on 11.03.23.

#ifndef CLASS_BUILDING_BUILDING_H
#define CLASS_BUILDING_BUILDING_H

#include <string>

using namespace std;

class Building {

public:

    Building();
    Building( string address, int plannedFloors, int plannedEntrances );

    string getAddress() const;
    int getPlannedFloors() const;
    int getPlannedEntrances () const;
    int getBuiltFloors() const;
    int getBuiltEntrances () const;

    void setAddress( string address );
    void setPlannedFloors( int plannedFloors );
    void setPlannedEntrances( int plannedEntrances );
    void setBuiltFloors( int constructedFloors );
    void setBuiltEntrances( int constructedEntrances );

    Building operator+( int floors);
    Building& operator+=( int floors);
    friend Building operator+( int entrances, Building& building);
    friend Building& operator+=( int entrances, Building& building);

private:
    string address;
    int plannedFloors;
    int plannedEntrances;
    int builtFloors;
    int builtEntrances;
};


#endif //CLASS_BUILDING_BUILDING_H
