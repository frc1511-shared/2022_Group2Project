#pragma once

#include <Mechanism.h>
#include <Cargo.h>
#include <HatchPanel.h>

// Handles the state of the gamepiece.
class GamePiece : public Mechanism {
public:
    GamePiece(Cargo* cargo, HatchPanel* hatchPanel);
    ~GamePiece();

    void process() override;
    void resetToMode(MatchMode mode) override;
    void sendFeedback() override;

    void setCargoDir(Cargo::CargoDir dir);

private:
    Cargo* cargo;
    HatchPanel* hatchPanel;

    enum class GamePieceType {
        CARGO,
        HATCH_PANEL,
        NOTHING
    };

    GamePieceType type;
    Cargo::CargoDir intake = Cargo::CargoDir::INTAKE;
};