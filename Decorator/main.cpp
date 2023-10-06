#include "Teach.h"
#include "DarkFruit.h"
#include "QuakeFruit.h"

int main(){
    Teach* teach = new Teach("马歇尔·D·蒂奇");
    DarkFruit* dark = new DarkFruit;
    QuakeFruit* quake = new QuakeFruit;

    dark->enhancement(teach);
    dark->fight();

    quake->enhancement(teach);
    quake->fight();

    delete teach;
    delete dark;
    delete quake;

    return 0;
}