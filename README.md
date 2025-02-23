# Mini-Detecto-AI-Based-Object-Classifier
## Overview
This project implements an AI-powered object recognition system that classifies objects using machine learning and controls a servo motor to point toward detected objects. The system processes images captured from a laptop webcam and classifies them using three different deep learning approaches:
1- Feed Forward Neural Network (ANN)
2- Convolutional Neural Network (CNN)
3- Transfer Learning (using pre-trained models, ResNet)

For each identified object, the servo motor adjusts:
- Right for an apple 
- Left for a banana 

## Features
- Machine Learning-Based Object Classification: Uses ANN, CNN, and Transfer Learning.
- Real-Time Image Processing: Uses TensorFlow's ImageDataGenerator for image loading and preprocessing.
- Servo Motor Control: Moves based on object detection results.
- Arduino Integration: Interfaces with the servo motor for movement.
- Performance Comparison: Evaluates classification accuracy across different ML models.

## System Components
Hardware
- Camera: Laptop webcam or USB camera for object observation.
- Servo Motor (1x): Moves left or right based on object classification.
- Arduino Board: Controls the servo motor based on classification results.

Software
- Python-Based Machine Learning
  - ANN (Artificial Neural Network)
  - CNN (Convolutional Neural Network)
  - Transfer Learning (ResNet, GoogleNet, etc.)
- TensorFlow's ImageDataGenerator for Image Preprocessing
- TensorFlow/Keras for Neural Networks
- Arduino Code for Servo Motor Control

## Installation & Setup
1- Clone the repository:
  ```sh
   git clone https://github.com/Radwa4335/Mini-Detecto-AI-Based-Object-Classifier.git
   cd Mini-Detecto-AI-Based-Object-Classifier
   ```
2- Install dependencies:
    ```sh
     pip install tensorflow numpy matplotlib
     ```
3- Train the Machine Learning Models:
   - Train ANN Model:
      ```sh
     jupyter notebook detecto_ann.ipynb
     ```
 - Train CNN Model:
     ```sh
     jupyter notebook detecto_cnn.ipynb
     ```
- Train Transfer Learning Model:
     ```sh
     jupyter notebook detecto_resnet50.ipynb
     ```
4- Run the Object Detection System:
    ```sh
    python detecto_main.py
     ```
5- Upload the Arduino Code:
   - Compile and flash arduino_code.ino using Arduino IDE or PlatformIO.
