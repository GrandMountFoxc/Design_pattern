#include "Panda.h"
#include "Chopper.h"
#include "Foreigner.h"

int main(){
    Foreigner* human = new American;
    EnglishChopper* echopper = new EnglishChopper(human);
    echopper->translateToPanda();
    echopper->translateToHuman();

    delete human;
    delete echopper;

    human = new French;
    FranceChopper* fchopper = new FranceChopper(human);
    fchopper->translateToPanda();
    fchopper->translateToHuman();
    
    delete human;
    delete fchopper;

    return 0;
}