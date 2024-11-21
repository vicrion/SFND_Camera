#include <iostream>
#include <numeric>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;

void magnitudeSobel()
{
    // load image from file
    cv::Mat img;
    img = cv::imread("./images/img1gray.png");

    // convert image to grayscale
    cv::Mat imgGray;
    cv::cvtColor(img, imgGray, cv::COLOR_BGR2GRAY);

    // apply smoothing using the GaussianBlur() function from the OpenCV
    cv::Mat blurred;
    cv::GaussianBlur(imgGray, blurred, cv::Size(5,5), 3);

    // create filter kernels using the cv::Mat datatype both for x and y
    float sobel_x[9] = {-1, 0, +1,
                        -2, 0, +2, 
                        -1, 0, +1};
    cv::Mat kernel_x = cv::Mat(3, 3, CV_32F, sobel_x);

    float sobel_y[9] = {-1, -2, -1,
                        0, 0, 0, 
                        1, 2, 1};
    cv::Mat kernel_y = cv::Mat(3, 3, CV_32F, sobel_y);

    // apply filter using the OpenCv function filter2D()
    cv::Mat img_x;
    cv::filter2D(blurred, img_x, -1, kernel_x);

    cv::Mat img_y;
    cv::filter2D(blurred, img_y, -1, kernel_y);

    // compute magnitude image based on the equation presented in the lesson 
    cv::Mat magnitude(imgGray);
    for (int i=0; i<magnitude.rows; i++){
        for (int j=0; j<magnitude.cols; ++j){
            auto ix = img_x.at<unsigned char>(i, j);
            auto iy = img_y.at<unsigned char>(i, j);
            magnitude.at<unsigned char>(i,j) = std::sqrt( ix*ix + iy*iy);
        }
    }    

    // show result
    string windowName = "Gaussian Blurring";
    cv::namedWindow(windowName, 1); // create window
    cv::imshow(windowName, magnitude);
    cv::waitKey(0); // wait for keyboard input before continuing
}

int main()
{
    magnitudeSobel();
}