#include <Controls.h>

Controls::Controls(Drive* drive)
: drive(drive) {

}

Controls::~Controls() {

}


void Controls::process() {
    double axisL = -controller.GetRawAxis(1);
    double axisR = -controller.GetRawAxis(5);

    drive->tankDrive(axisR, axisL);

    bool intake = controller.GetRawButton(1);
    if (intake) {
        
    }

}

void Controls::resetToMode(MatchMode mode) {

}
void Controls::sendFeedback() {

}
