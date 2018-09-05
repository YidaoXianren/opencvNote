//make and display a image
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
using namespace std;

int main(int argc, char *argv[])
{
    //create the data
    float data[] = {10, 50, 150, 255, 10, 50, 150, 255, 10, 50, 150, 255};
    //create a matrix - Size(4,3) means 3row4col, Size(3,4) means 4row3col
    //https://stackoverflow.com/questions/37530368/difference-between-opencv-type-cv-32f-and-cv-32fc1
    Mat image(Size(4,3),CV_32FC1,data);
    cout<<image;
    //display the image
    //CV_8UC1 is a data type for single channel color image
    image.convertTo(image,CV_8UC1);
    namedWindow("Img1",CV_WINDOW_KEEPRATIO);
    imshow("Img1",image);
    waitKey(0);
    return 0;
}
