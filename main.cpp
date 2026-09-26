#include <opencv2/opencv.hpp>
#include <opencv2/xobjdetect.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    // Load the face detector
    cv::CascadeClassifier faceDetector;

    if (!faceDetector.load("haarcascade_frontalface_default.xml"))
    {
        cout << "ERROR: Could not load face detector!" << endl;
    // Open laptop camera
    VideoCapture camera(0);

    if (!camera.isOpened())
    {
        cout << "ERROR: Could not open camera!" << endl;
        return -1;
    }

    cout << "Camera started. Press ESC to exit." << endl;

    Mat frame, gray;

    while (true)
    {
        camera >> frame;

        if (frame.empty())
            break;

        // Convert camera image to grayscale
        cvtColor(frame, gray, COLOR_BGR2GRAY);

        // Detect faces
        vector<Rect> faces;

        faceDetector.detectMultiScale(
            gray,
            faces,
            1.1,
            5,
            0,
            Size(30, 30)
        );

        // Draw rectangles around detected faces
        for (const Rect& face : faces)
        {
            rectangle(
                frame,
                face,
                Scalar(0, 255, 0),
                2
            );
        }

        // Display number of faces
        putText(
            frame,
            "Faces: " + to_string(faces.size()),
            Point(20, 40),
            FONT_HERSHEY_SIMPLEX,
            1,
            Scalar(0, 255, 0),
            2
        );

        imshow("Face Detection", frame);

        // ESC key exits
        if (waitKey(30) == 27)
            break;
    }

    camera.release();
    destroyAllWindows();

    return 0;
}
}