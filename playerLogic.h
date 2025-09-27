#ifndef PLAYERLOGIC_H
#define PLAYERLOGIC_H
#include "randoomizerLogic.h"
#include<QList>
#include "dominoLogic.h"

class CPlayer : public CRandom
{
public:
    CPlayer();
    ~CPlayer(){} // destructor
    std::deque<data_domino> gotHand;
    class CDomino *player_pDominoOBJ=NULL;
    // PASSING OBJECT AS POINTER - FOR DIFFERENT CLASSES INTERFACE
    void API(CDomino *receive_dominoPointerOBJ);
    int takePiece(int pieceNo);

};

#endif // PLAYERLOGIC_H
