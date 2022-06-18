//
// Created by Yakov Khodorkovski on 01/06/2022.
//
#pragma once
#include <algorithm>
#include <deque>
#include <map>
#include <vector>
#include <iostream>

using namespace std; 

class Schedule {
    size_t Round;
    size_t team_const; 
    vector<size_t> teams_id;
    map<size_t , size_t > team_id_map;
public : 
    Schedule();
    map<size_t,size_t> & get_team_id_map();
    void generate_next_round();


};

