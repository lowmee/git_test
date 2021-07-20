//
// Created by rmy on 2021/1/7.
//

//git2
//git2
//git2
//git2
#include <opencv2/core/core.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <string>
#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgcodecs/imgcodecs_c.h>
#include <cv.hpp>

//注释#####
using namespace std;
//注释@@@@
int main(int argc, char **argv)
{
    string registration_method;
    double r;
    double r;
    double r;
    double r;
    double r;
    double r;



    else cout<<"success to open file at: "<<path<<endl;
    fsSettings["registration_method"] >> registration_method;
    fsSettings["NDT"]["res"] >> r;


    cout<< "registration_method = "<< registration_method << endl;
    cout<< "r = "<< r << endl;

    cv::Mat M = cv::Mat::eye(3,3,CV_32F);
    cout<<"M" << M <<endl;
    M.resize(2);
    cout<<"M.resize(2)"<<M <<endl;
    M.resize(4,4);
    cout<<"M.resize(4,4)"<<endl<<M <<endl;

    cv::Mat Z = M(cv::Rect(1,1, 2, 3));
    cout<<"Z"<<endl<<Z <<endl;

    cv::Mat R;
    cv::Size sz(3,3);
    cv::resize(M, R, sz);
    cout<<"R"<<endl<<R <<endl;

    cv::Mat im;
    im = cv::imread("/home/rmy/test/OpenCV_test/2.jpg", CV_LOAD_IMAGE_UNCHANGED);
    cv::Size size = im.size();
    cout<<"size"<<endl<<size <<endl;
    cv::imshow("im", im);
    cv::waitKey(0);

    cv::Size rsz(480,480);
    cv::Mat im_resize;
    cv::resize(im, im_resize, rsz);
    cv::Size rsize = im_resize.size();
    cout<<"rsize"<<endl<<rsize <<endl;
    cv::imshow("im_resize", im_resize);
    cv::waitKey(0);

    cv::Mat im_copy;
    im_resize.copyTo(im_copy);
    cv::imshow("im_copy", im_copy);
    cv::waitKey(0);

    cv::Mat im_border;
    cv::copyMakeBorder(im_resize, im_border, 200, 200, 200, 200, cv::BORDER_WRAP + cv::BORDER_ISOLATED);
    cv::imshow("im_border", im_border);
    cv::waitKey(0);

    vector<cv::KeyPoint> vKeysCell;
    cv::FAST(M, vKeysCell, 20, true);

}
