#pragma once

#include <Mechanism.h>
#include <ctre/Phoenix.h>

class Cargo : public Mechanism {
public:
    Cargo();
    ~Cargo();

    void process() override;
    void resetToMode(MatchMode mode) override;
    void sendFeedback() override;

    enum class CargoDir {
        NOTTAKE,
        INTAKE,
        OUTTAKE,
    };

    void setIntake(bool intake);
    void setCargoDir(CargoDir dir);
    CargoDir getCargoDir();

private:
    CargoDir cargoDir;

    bool intake;

    ctre::phoenix::motorcontrol::can::TalonSRX leftCargoTalon {4};
    ctre::phoenix::motorcontrol::can::TalonSRX rightCargoTalon {11};
};