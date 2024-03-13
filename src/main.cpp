#include <iostream>

#include "core/team.h"
#include "core/tournament.h"

int main(int, char **)
{
    Tournament tournament;
    std::cout << "Hello, from torno!\n";

    Team team1("Team 1");
    std::cout << "Teams1: " << team1.get_name() << std::endl;

    return 0;
}
