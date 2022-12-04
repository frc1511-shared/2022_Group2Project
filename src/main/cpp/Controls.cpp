#include <Controls.h>

Controls::Controls(Drive* drive)
: drive(drive) {


}

Controls::~Controls() {

}


void Controls::process() {
double axisL = controller.GetRawAxis(1);
double axisR = controller.GetRawAxis(5);

double l = 0;
double r = 0;

 if (axisL > 0.5) {
    l = 1;
  } else if (axisL < -0.5) {
    l = 0;
  } else {
    l = 0.5;
  }

  if (axisR > 0.5) {
    r = 1;
  } else if (axisR < -0.5) {
    r = 0;
  } else {
    r = 0.5;
  }

  drive->tankDrive(r, l);
}

void Controls::resetToMode(MatchMode mode) {

}

void Controls::sendFeedback() {

}
