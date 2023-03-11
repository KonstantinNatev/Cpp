// Created by konstantin on 11.03.23.

#include "Building.h"
#include <string>

using namespace std;

Building::Building() {
    address = "";
    plannedFloors = 0;
    plannedEntrances = 0;
    builtFloors = 0;
    builtEntrances = 0;
}

Building::Building(string address, int plannedFloors, int plannedEntrances ) {
    this->address = address;
    this->plannedFloors = plannedFloors;
    this->plannedEntrances = plannedEntrances;
    builtFloors = 0;
    builtEntrances = 0;
}

string Building::getAddress() const {
    return address;
}

int Building::getPlannedFloors() const {
    return plannedFloors;
}

int Building::getPlannedEntrances() const {
    return plannedEntrances;
}

void Building::setAddress( string address ) {
    this->address = address;
}

void Building::setPlannedFloors( int plannedFloors ) {
    this->plannedFloors = plannedFloors;
}

int Building::getBuiltEntrances() const {
    return builtEntrances;
}

void Building::setBuiltEntrances(int builtEntrances) {
    this->builtEntrances = builtEntrances;
}

Building Building::operator+(int floors) {
    Building result = *this;
    result.builtFloors += floors;
    return result;
}

Building& Building::operator+=(int floors) {
    builtFloors += floors;
    return *this;
}

Building operator+(int entrances, Building& building) {
    Building result = building;
    result.builtEntrances += entrances;
    return result;
}


void Building::setPlannedEntrances( int plannedEntrances ) {
    this->plannedEntrances = plannedEntrances;
}
