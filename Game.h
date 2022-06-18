#pragma once
#include "Team.h"
#include <chrono>


class Game {
Team Home_team; 
Team Away_team;

public : 
Game(Team & Home_team, Team & Away_team);
unsigned int Home_result;
unsigned int Away_result;
void print_game(int home_result, int away_result);
Game ()= default;
~Game()= default;
unsigned int add_bonus(double t);
};


