//Split to BGR
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
using namespace std;

int main(int argc, char *argv[])
{
    Mat img = imread("1.jpg",1);
    namedWindow("naruto",CV_WINDOW_KEEPRATIO);
    imshow("naruto",img);

    vector<Mat> BGR;
    split(img,BGR);

    namedWindow("blue",CV_WINDOW_KEEPRATIO);
    namedWindow("green",CV_WINDOW_KEEPRATIO);
    namedWindow("red",CV_WINDOW_KEEPRATIO);

    imshow("blue",BGR[0]);
    imshow("green",BGR[1]);
    imshow("red",BGR[2]);

    waitKey(0);
}
