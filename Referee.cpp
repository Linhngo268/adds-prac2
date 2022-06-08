#include "Referee.h"
Referee::Referee(){

}
char Referee::RefGame(Human player1, Computer player2){
    char playerHuman=player1.makeMove();
if(playerHuman == 'R'){
    return 'T';
}
else if(playerHuman=='P'){
    return 'W';
}
else if (playerHuman=='S'){
    return 'L';
}
return 0;
}

