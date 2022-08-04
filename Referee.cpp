#include "Referee.h"
#include "Computer.h"
#include "Human.h"
Referee::Referee(){

}
char Referee::RefGame(Human player1, Computer player2){
    char playerHuman=player1.makeMove();
    char computermove=player2.makeMove();
if(playerHuman == 'R' && computermove == 'S'){
        return 'W';
    }else if(playerHuman == 'R' && computermove == 'P'){
        return 'L';
    }else if(playerHuman == 'S' && computermove == 'P'){
        return 'W';
    }else if(playerHuman == 'S' && computermove == 'R'){
        return 'L';
    }else if(playerHuman == 'P' && computermove == 'R'){
        return 'W';
    }else if(playerHuman == 'P' && computermove == 'S'){
        return 'L';
    }
    else {
        return 'T';
    }
}
