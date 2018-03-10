//
//  Model.cpp
//  oF_OscSenderSample
//
//  Created by HirokiNaganuma on 2018/03/11.
//

#include "Model.hpp"

int Model::nearest_x;
int Model::nearest_depth;
int Model::num_of_people;

void Model::update_values(int nearest_x, int nearest_depth, int num_of_people){
    Model::nearest_x = nearest_x;
    Model::nearest_depth = nearest_depth;
    Model::num_of_people = num_of_people;
}
