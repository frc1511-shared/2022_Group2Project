#include <Controls.h>

Controls::Controls(Drive* drive)
: drive(drive) {


}

Controls::~Controls() {

}


void Controls::process() {
double axis = controller.GetRawAxis(0);

 if (axis > 0.5) {
    drive->tankDrive(1, 0.5);
  } else if (axis < -0.5) {
    drive->tankDrive(0.5, 1);
  } else {
    drive->tankDrive(0.5, 0.5);
  }
}

void Controls::resetToMode(MatchMode mode) {

}

void Controls::sendFeedback() {

}
