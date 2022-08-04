#include "Referee.h"
Referee::Referee(){

}
char Referee::RefGame(Human player1, Computer player2){
    char playerHuman=player1.makeMove();
    char computermove=player2.makeMove();
if(playerHuman == 'R' && computermove =='R'){
    return 'T';
}
else if(playerHuman=='P' && computermove =='R'){
    return 'W';
}
else if (playerHuman=='S' && computermove =='R'){
    return 'L';
}
return 0;
}
