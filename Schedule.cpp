//
// Created by Yakov Khodorkovski on 01/06/2022.
//

#include "Schedule.h"


Schedule::Schedule() {
    this->Round = 0 ;
    this->team_const = 0 ;
    for (size_t i = 0 ; i < 20 ; i++){ 
        this->teams_id.push_back(i);
    }
} 
map<size_t,size_t> & Schedule::get_team_id_map() {
    if (20 < Round ) {
        throw "Schedule is over";
    }
    Round += 1; 
    this->generate_next_round();
    return this->team_id_map ;
}

void Schedule::generate_next_round() {
   rotate(this->teams_id.begin()+1 , this->teams_id.end()-1, this->teams_id.end());
    if (11 > Round){
        for ( unsigned int i = 0 ; i < 10 ; i++ ){
            this->team_id_map[i] = this->teams_id[i+10];
        }
    }
    else {
        for ( unsigned int i = 0 ; i < 10 ; i++ ){
            this->team_id_map[i+10] = this->teams_id[i];
        }
}
}

