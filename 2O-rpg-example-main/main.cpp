////Samantha

#include <iostream>
#include "Enemy/Enemy.h"
#include "Player/Player.h"
#include "Combat/Combat.h"
#include <queue>

using namespace std;

int main() {
    Player *player = new Player("Lila", 4, 7, 2, 10);
    Enemy *enemy = new Enemy("Calculo", 20, 5, 2, 8);
    Enemy *enemy2 = new Enemy("Programacion", 30, 7, 6, 9);

    vector<Character*> participants;
    participants.push_back(player);
    participants.push_back(enemy);
    participants.push_back(enemy2);

    Combat* combat = new Combat(participants);
    combat->doCombat();

    delete player;
    delete enemy;
    delete enemy2;
    delete combat;

    return 0;
}
