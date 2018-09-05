//Access pixel values in images - convert b & w
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
using namespace std;

int main(int argc, char *argv[])
{
    Mat img = imread("bw.jpg",1);
    namedWindow("BW",CV_WINDOW_KEEPRATIO);
    imshow("BW",img);
    waitKey(0);

    for(int i=0;i<img.rows;i++){
        for(int j=0;j<img.cols;j++){
            if(img.at<Vec3b>(i,j)[0]==255 && img.at<Vec3b>(i,j)[1]==255 && img.at<Vec3b>(i,j)[2]==255){
                img.at<Vec3b>(i,j)[0]=0; //blue
                img.at<Vec3b>(i,j)[1]=0; //green
                img.at<Vec3b>(i,j)[2]=0; //red
            }
        }
    }

    namedWindow("converted",CV_WINDOW_KEEPRATIO);
    imshow("converted",img);
    waitKey(0);
}
