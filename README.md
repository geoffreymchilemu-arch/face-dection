# Face Detection using C++ and OpenCV

A real-time face detection project developed using C++ and OpenCV.
The program uses a laptop webcam and a Haar Cascade classifier to
detect human faces.

## Features

- Real-time face detection using a webcam
- Uses OpenCV for image processing
- Uses a Haar Cascade classifier
- Displays detected faces in the camera feed
- Press `ESC` to exit the program

## Technologies Used

- C++
- OpenCV
- Visual Studio Code
- MSYS2 UCRT64

## Project Files

- `main.cpp` - Main C++ source code
- `haarcascade_frontalface_default.xml` - Haar Cascade face detection model
- `.gitignore` - Files excluded from Git tracking
- `README.md` - Project documentation

## How It Works

1. The program loads the Haar Cascade face detector.
2. It opens the laptop webcam.
3. Video frames are continuously captured.
4. OpenCV processes each frame to detect faces.
5. A rectangle is drawn around detected faces.
6. Press `ESC` to close the program.

## Requirements

- C++ compiler
- OpenCV
- Webcam
- Visual Studio Code
- MSYS2 UCRT64

## Author

Geoffrey M. Chilemu
