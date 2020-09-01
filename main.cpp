#include <iostream>
#include "User.h"

int main() {
    User *joffrey = new User("JoffreyBaratheon");
    User *sansa = new User("SansaStark");
    User *arya = new User("AryaStark");
    User *eddard = new User("EddardStark");

    joffrey->startNewChat(*sansa);
    joffrey->startNewChat(*arya);
    joffrey->sendMessage(*arya, "My father will kill your wolf, you can stop thiniking about it.");
    arya->sendMessage(*joffrey, "Instead you can be sure it will never happen.");
    joffrey->sendMessage(*sansa,
                         "Darling, tell your little sister that if she doesn't listen she'll be in serious trouble.");
    sansa->sendMessage(*joffrey, "Of course my lord, I'll tell her immediately");

    sansa->startNewChat(*arya);
    sansa->sendMessage(*arya,
                       "Arya, why don't you listen to Joffrey? Is gonna kill your wolf if you don't apologize.");
    arya->sendMessage(*sansa, "Don't bother me with your dumb lord whipping.");

    arya->startNewChat(*eddard);
    arya->sendMessage(*eddard, "Daddyy, Sansa is bothering mee.");
    arya->removeChat("JoffreyBaratheon");
    joffrey->removeChat("AryaStark");

    delete arya;
    delete sansa;
    delete joffrey;
    delete eddard;
}
