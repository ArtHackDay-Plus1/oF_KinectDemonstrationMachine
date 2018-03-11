[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

# oF_KinectDemonstrationMachine 

```cpp
//--------------------------------------------------------------
void OSCSenderManager::update(){

    if(ofGetElapsedTimeMillis()%1000 < 200){

        //osc message instance
        ofxOscMessage m;

        //set osc address
        m.setAddress("/data");

        //set current mouse position as OSC arguments
        m.addIntArg(Model::nearest_x);
        m.addIntArg(Model::nearest_depth);
        m.addIntArg(Model::num_of_people);

        //send message
        sender.sendMessage(m);

        ofLog() << "nearest_x : " <<"[" <<Model::nearest_x << "]";
        ofLog() << "nearest_depth : " <<"[" <<Model::nearest_depth << "]";
        ofLog() << "num_of_people : " <<"[" <<Model::num_of_people << "]";
    }
}
```


ここで、OSCのSendを行う


```cpp
float nearest_x = ofMap(y, frame_edge_y_up , frame_edge_y_down ,MacroManager::frame_width ,0);
float nearest_depth = ofMap(x-frame_edge_x_down, 0, MacroManager::scaling_distance_kinect_to_frame,0,MacroManager::distance_kinect_to_frame);
    Model::update_values(nearest_x,  nearest_depth);
```


Sendするものは、このサンプルではModelとして保持した値を、適当なタイミングで送信する


## LISENSE

Copyright 2018 Hiroki11x(Hiroki Naganuma)

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

