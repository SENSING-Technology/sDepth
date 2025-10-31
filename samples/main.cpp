#include <iostream>
#include "SG_StereoDepth_api.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <keyfile_name> " << std::endl;
        std::cerr << "Example: " << argv[0] << "./demo /home/nvidia/stereodepth.key" << std::endl;
        return 1;
    }
    std::string leftimg_path = "../picture/left0000.png";
    std::string rightimg_path = "../picture/right0000.png";
    
    sDepth::StereoFrame frame;
    sDepth::StereoConfig config;
    frame.left_rect = cv::imread(leftimg_path);
    frame.right_rect = cv::imread(rightimg_path);
    config.json_file = "../config/stereo_calibration.json";
    config.enc_file = "../config/stereodepth.enc";
    config.key_file = argv[1];
    
    bool ret = sDepth::SG_STEREO_INIT(frame, config);

    cv::Mat temp_result;
    ret = sDepth::SG_STEREO_PROCESS(temp_result);
    if (ret) {
        std::cout << "SG_STEREO_PROCESS sucessful!!!" << std::endl;
        cv::imwrite("temp_result.jpg", temp_result);
    }

    sDepth::SG_STEREO_DEINIT();
    
    return 0;
}