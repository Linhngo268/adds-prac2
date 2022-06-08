#include "Referee.h"
 
#include <iostream>
int main(){
    Human human;
    Computer computer;
Referee referee;
char result=referee.RefGame(human,computer);
std::cout<<result<<"\n";

}