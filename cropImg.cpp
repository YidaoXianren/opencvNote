//Crop a image
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

    Rect cropRect = Rect(100,100,200,300);
    Mat croppedImg = img(cropRect);

    namedWindow("cropped",CV_WINDOW_KEEPRATIO);
    imshow("cropped",croppedImg);

    cout << croppedImg.size() << endl;
    waitKey(0);
}
