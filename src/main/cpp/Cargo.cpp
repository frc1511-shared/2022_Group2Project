#include <Cargo.h>

Cargo::Cargo() {

}

Cargo::~Cargo() {

}

void Cargo::process() {
    /*

    arm motor
    elevator motor

    move elevator to game piece place
    each hand on arm moves to grab pieces
    elevator can move arm and piece up and down
    arms let go when the robot moved to good spot to put it in the thing

    */



   /*
    cargo things

    talons for motors

    move each one in to get balls
    do something with them idk


    

   */
}

void Cargo::resetToMode(MatchMode mode) {

}

void Cargo::sendFeedback() {

}

void Cargo::setCargoDir(CargoDir dir) {
    cargoDir = dir;
}

Cargo::CargoDir Cargo::getCargoDir() {
    return cargoDir;
}