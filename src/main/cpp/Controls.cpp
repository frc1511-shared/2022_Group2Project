#include <Controls.h>

Controls::Controls(Drive* drive)
: drive(drive) {


}

Controls::~Controls() {

}


void Controls::process() {
double axisL = controller.GetRawAxis(1);
double axisR = controller.GetRawAxis(5);

drive->tankDrive(axisR, axisL);
}

void Controls::resetToMode(MatchMode mode) {

}

void Controls::sendFeedback() {

}
