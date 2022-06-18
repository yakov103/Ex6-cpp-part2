//
// Created by Yakov Khodorkovski on 01/06/2022.
//
#pragma once
#include "Game.h"
#include "Schedule.h"
#include "Team.h"
class Schedule;
class Game;
class Team;

class Leauge {
    vector<Team> teams;
    Schedule schedule;
    bool is_started;


public : 
    Leauge();
    Leauge & AddTeam (string & name, double strength);
    Leauge & AddTeam (const Team & team);
    bool Start();
    bool generate_name(const string & name ); 
    void print_teams();
    bool fill_bots();
    void play_round();



};
