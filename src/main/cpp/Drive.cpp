#include <Drive.h>

Drive::Drive() {

}

Drive::~Drive() {

}

void Drive::process() {
    leftSpark.Set(left);
    rightSpark.Set(right);
}

void Drive::resetToMode(MatchMode mode) {
    left = 0;
    right = 0;
    leftSpark.Set(0);
    rightSpark.Set(0);
}

void Drive::sendFeedback() {

}

void Drive::tankDrive(double left1, double right1) {
    // Tank drive stuff here!
    // Charlie broke tank drive at this line!!!
    // Tyler removed that line :(
    left = left1 * 0.5;
    right = right1 * 0.5;
}
