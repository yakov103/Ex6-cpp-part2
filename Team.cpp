//
// Created by Yakov Khodorkovski on 01/06/2022.
//

#include "Team.h"
static unsigned int idMaker = 0 ; 

Team::Team (string & name, double strength, bool is_bot = false) : name(name), id(idMaker++), strength(strength), is_bot(is_bot) {
    this->stats.games_played= 0 ; 
    this->stats.goals_scored = 0 ;
    this->stats.wins = 0 ;
    this->stats.loses = 0 ;
}


void Team::update_stats(int goals_scored, size_t wins) {
    this->stats.games_played++ ;
    this->stats.goals_scored += goals_scored ;
    if (wins) {
        this->stats.wins++ ;
    } else {
        this->stats.loses++ ;
    }
}


void Team::print_stats() {
    cout << "Team " << this->name << " stats : " << endl ;
    cout << "Games played : " << this->stats.games_played << endl ;
    cout << "Goals scored : " << this->stats.goals_scored << endl ;
    cout << "Wins : " << this->stats.wins << endl ;
    cout << "Loses : " << this->stats.loses << endl ;
}

double Team::get_strength() {
    return this->strength ;
}

