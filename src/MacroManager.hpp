//
//  MacroManager.hpp
//  oF_OscSenderSample
//
//  Created by HirokiNaganuma on 2018/03/11.
//

#ifndef MacroManager_hpp
#define MacroManager_hpp

#include <stdio.h>
#include <string>

namespace MacroManager {

    const float scaling_factor = 5;

    const float frame_width = 2700;
    const float frame_height = 1200;

    const float kinect_width = 200;
    const float kinect_height = 50;

    const float distance_kinect_to_frame = 4700;

    const float scaling_frame_width = 540;
    const float scaling_frame_height = 240;

    const float scaling_kinect_width = 40;
    const float scaling_kinect_height = 10;

    const float scaling_distance_kinect_to_frame = 700;

    const int osc_sender_port_num = 8015;
//    const std::string osc_sender_ip = "192.168.2.15";
    const std::string osc_sender_ip = "127.0.0.1";
};

#endif /* MacroManager_hpp */
