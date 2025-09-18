#ifndef PLAYER_H
#define PLAYER_H

class Player {
public:
    void talk();
    void walk();
    bool isTalking = false;
    bool isWalking = false;
};

#endif