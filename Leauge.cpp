//
// Created by Yakov Khodorkovski on 01/06/2022.
//

#include "Leauge.h"


Leauge::Leauge() {

    this->is_started = false;
    this->teams.clear(); 
}



Leauge & Leauge::AddTeam(string & name, double strength) {
    this->teams.push_back(Team(name, strength));
    return *this;
}

Leauge & Leauge::AddTeam(const Team & team) {
    this->teams.push_back(team);
    return *this;
}

bool Leauge::Start() {
    if (this->is_started) {
        return false;
    }
    this->is_started = true;
    this->fill_bots();
    this->schedule.generate_next_round();
    return true;
}

bool Leauge::fill_bots() { 
   while (this->teams.size() < 20) {
    string name = "Bot " + to_string(this->teams.size());
       this->teams.push_back(Team(name, 0.5));
   }
   return true; 
}


std::string random_string( size_t length )
{
    auto randchar = []() -> char
    {
        const char charset[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
        const size_t max_index = (sizeof(charset) - 1);
        return charset[ (unsigned long) rand() % max_index ];
    };
    std::string str(length,0);
    std::generate_n( str.begin(), length, randchar );
    return str;
}