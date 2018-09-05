//Draw a line, rectangle, circle
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
using namespace std;

int main(int argc, char *argv[])
{
    //white line
    Mat dwg1;
    dwg1 = Mat::zeros(Size(200,200),CV_8UC1);

    line(dwg1,Point(10,50),Point(150,50),Scalar(255),2,8,0);
    imshow("image1",dwg1);
    waitKey(0);

    //white rectangle
    Mat dwg2;
    dwg2 = Mat::zeros(Size(200,200),CV_8UC1);

    rectangle(dwg2, Point(0,0),Point(200,100),Scalar(255),2,8,0);
    imshow("image2",dwg2);
    waitKey(0);


    //color line and rectangle
    Mat dwg3;
    dwg3 = Mat::zeros(Size(200,200),CV_8UC3);

    line(dwg3,Point(0,50),Point(200,50),Scalar(0,255,0),2,8,0);
    rectangle(dwg3, Point(0,0),Point(200,100),Scalar(255,0,0),2,8,0);
    circle(dwg3,Point(100,100),40,Scalar(0,0,255),2,8,0);
    imshow("image3",dwg3);
    waitKey(0);
}
