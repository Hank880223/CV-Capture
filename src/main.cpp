#include "opencv2/video/tracking.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    cv::VideoCapture cap(1);
	cap.set(cv::CAP_PROP_FRAME_WIDTH , 640);
	cap.set(cv::CAP_PROP_FRAME_HEIGHT , 480);
	cv::Mat frame;
	cap >> frame;
	
	while(cap.isOpened())
	{
		cap >> frame;
	
		cv::imshow("output", frame);
    	cv::waitKey(1);
	}

	return 0;
}
