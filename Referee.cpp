#include "Referee.h"
Referee::Referee(){

}
char Referee::RefGame(Human player1, Computer player2){
if(player1.makeMove() == 'R'){
    return 'T';
}
else if(player1.makeMove()=='P'){
    return 'W';
}
else if (player1.makeMove()=='S'){
    return 'L';
}
return 0;
}

