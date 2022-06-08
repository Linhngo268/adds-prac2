#include "Computer.h"
#include<iostream>
using namespace std;
Computer::Computer(){

}
char Computer::makeMove(){
    char compu;
    cout<<"enter move";
    cin>>compu;
    return compu;
}