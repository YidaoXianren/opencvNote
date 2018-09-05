//Save files
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
using namespace std;

int main(int argc, char *argv[])
{
    //color line and rectangle
    Mat dwg3;
    dwg3 = Mat::zeros(Size(200,200),CV_8UC3);

    line(dwg3,Point(0,50),Point(200,50),Scalar(0,255,0),2,8,0);
    rectangle(dwg3, Point(0,0),Point(200,100),Scalar(255,0,0),2,8,0);
    circle(dwg3,Point(100,100),40,Scalar(0,0,255),2,8,0);
    imshow("image3",dwg3);
    imwrite("image.jpg",dwg3);
    waitKey(0);
}
