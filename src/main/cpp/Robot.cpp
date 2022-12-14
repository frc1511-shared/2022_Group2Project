#include "Robot.h"

#include <fmt/core.h>

void Robot::RobotInit() { }

void Robot::RobotPeriodic() { }

void Robot::AutonomousInit() { }

void Robot::AutonomousPeriodic() { }

void Robot::TeleopInit() { }

void Robot::TeleopPeriodic() {
    controls.process();
    drive.process();
    hatchPanel.process();
    cargo.process();
    gamePiece.process();
}

void Robot::DisabledInit() { }

void Robot::DisabledPeriodic() { }

void Robot::TestInit() { }

void Robot::TestPeriodic() { }

#ifndef RUNNING_FRC_TESTS
int main() {
    return frc::StartRobot<Robot>();
}
#endif
