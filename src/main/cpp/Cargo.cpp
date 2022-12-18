#include <Cargo.h>

Cargo::Cargo() {

}

Cargo::~Cargo() {

}

void Cargo::process() {
    /*

    This should be in the hatch pannel class

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

    //cargoTalon.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, 0.1);

    //if its intaking, set the intake motors to move
    if (intake) {
        leftCargoTalon.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, 0.1);
        rightCargoTalon.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, 0.1);
    } else {
        leftCargoTalon.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, 0.0);
        rightCargoTalon.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, 0.0);
    }
}

void Cargo::resetToMode(MatchMode mode) {
    intake = false;
    leftCargoTalon.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, 0.0);
    rightCargoTalon.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, 0.0);
}

void Cargo::sendFeedback() {

}

void Cargo::setCargoDir(CargoDir dir) {
    cargoDir = dir;
}

void Cargo::setIntake(bool intake) {
    this->intake = intake;
}

Cargo::CargoDir Cargo::getCargoDir() {
    return cargoDir;
}