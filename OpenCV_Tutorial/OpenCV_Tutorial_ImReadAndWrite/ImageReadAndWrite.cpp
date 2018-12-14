#include<opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{


    cout << "OpenCV Version: " << CV_VERSION << endl;

    Mat image;
    image = imread("images/photo.jpg");

    if (!image.data)
    {
        printf("No image data \n");
        return -1;
    }

    Mat gray_image;
    cvtColor(image, gray_image, COLOR_BGR2GRAY);


    imwrite("images/gray_image.jpg", gray_image);

    imshow("Image", image);
    imshow("Gray Image", gray_image);


    Point2f p(5, 1);
    cout << "Point(2D) = " << p << endl << endl;

    double t = (double)getTickCount();
    t = ((double)getTickCount() - t) / getTickFrequency();
    cout << "Time pass in seconds is :" << t << endl;

    waitKey(0);
    return 0;
}


