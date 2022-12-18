
#include <GamePiece.h>

GamePiece::GamePiece(Cargo* cargo, HatchPanel* hatchPanel)
: cargo(cargo), hatchPanel(hatchPanel) {

}

GamePiece::~GamePiece() {

}

void GamePiece::process() {
    if (type == GamePieceType::CARGO) {
       setCargoDir(intake);
    }


}

void GamePiece::resetToMode(MatchMode mode) {

}

void GamePiece::sendFeedback() {

}

void setCargoDir(Cargo::CargoDir dir) {
    intake = dir;
}  