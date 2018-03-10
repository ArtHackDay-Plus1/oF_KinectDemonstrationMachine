//
//  Model.hpp
//  oF_OscSenderSample
//
//  Created by HirokiNaganuma on 2018/03/11.
//

#ifndef Model_hpp
#define Model_hpp

#include "ofMain.h"

class Model{
public:
    static int nearest_x;
    static int nearest_depth;
    static int num_of_people;

    static void update_values(int nearest_x, int nearest_depth, int num_of_people);
};

#endif /* Model_hpp */
