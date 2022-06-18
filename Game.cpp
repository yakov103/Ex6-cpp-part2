//
// Created by Yakov Khodorkovski on 01/06/2022.
//

#include "Game.h"
#include <random>


// function to generate random number between 0 and 100 
int random_number() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 100);
    return dis(gen);
}

Game::Game(Team & team1, Team & team2) : Home_team(team1), Away_team(team2) {
    size_t home_balance = add_bonus(team1.get_strength()) + Home_result ; 
    size_t away_balance = add_bonus(team2.get_strength()) + Away_result ;
    if (away_balance == home_balance) {
        if (team1.get_strength() > team2.get_strength()) {
            Home_result = 1 ;
            Away_result = 0 ;
        } else {
            Home_result = 0 ;
            Away_result = 1 ;
        }
    }
    bool is_home_win = home_balance > away_balance ;
    team1.update_stats(home_balance-away_balance,is_home_win ) ;
    team2.update_stats(away_balance-home_balance,!is_home_win) ;
    team1.print_stats() ;
}

unsigned int Game::add_bonus(double t) {
    // random number between 1 and 100 
    int r = random_number() ;
    return (unsigned int) (t * r) ;
}


