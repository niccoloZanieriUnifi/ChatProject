#include <iostream>
#include "User.h"

int main() {
    User *joffrey = new User("JoffreyBaratheon");
    User *sansa = new User("SansaStark");
    User *arya = new User("AryaStark");
    User *eddard = new User("EddardStark");

    joffrey->startNewChat(*sansa);
    joffrey->startNewChat(*arya);
    joffrey->sendMessage("AryaStark", "My father will kill your wolf, you can stop thiniking about it.");
    arya->sendMessage("JoffreyBaratheon", "Instead you can be sure it will never happen.");
    joffrey->sendMessage("SansaStark",
                         "Darling, tell your little sister that if she doesn't listen she'll be in serious trouble.");
    sansa->sendMessage("JoffreyBaratheon", "Of course my lord, I'll tell her immediately");

    sansa->startNewChat(*arya);
    sansa->sendMessage("AryaStark",
                       "Arya, why don't you listen to Joffrey? Is gonna kill your wolf if you don't apologize.");
    arya->sendMessage("SansaStark", "Don't bother me with your dumb lord whipping.");

    arya->startNewChat(*eddard);
    arya->sendMessage("EddardStark", "Daddyy, Sansa is bothering mee.");
    arya->removeChat("JoffreyBaratheon");
    joffrey->removeChat("AryaStark");

    delete arya;
    delete sansa;
    delete joffrey;
    delete eddard;
}
