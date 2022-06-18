#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <map>
#include <iomanip>
#include <random>
#include <cmath>
#include <algorithm>

using namespace std ;

class stats { 
    public : 
    size_t games_played;
    int goals_scored;
    size_t wins;
    size_t loses; 
};

class Team {
string name;
size_t id; 
double strength;
bool is_bot; 
stats stats;
public : 
Team() = default;
~Team() = default;
Team (string & name, double strength, bool is_bot = false);
void update_stats(int goals_scored, size_t wins);
void print_stats();
double get_strength();
};



