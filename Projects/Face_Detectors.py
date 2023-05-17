#This line imports the cv2 module, which provides computer vision functionality in Python.
import cv2

print("Welcome to Our Camera Application and Face Detector")

# Open default camera
cap = cv2.VideoCapture(0)
#This line opens the default camera and creates a VideoCapture object named cap.

# Check if the camera is opened successfully
if not cap.isOpened():
    print("Unable to open camera")
    exit()
#This code checks if the camera is opened successfully. If the camera fails to open, it prints a message "Unable to open camera" and exits the program.

# Capture a frame
ret, frame = cap.read()
#This line captures a frame from the camera and stores it in a variable frame. The read() method returns two values, the first value is a Boolean value that indicates whether the frame was read successfully or not, and the second value is the frame itself.

# Release the camera
cap.release()
#This line releases the camera and frees up system resources.

# Save the captured image
cv2.imwrite("captured_image.jpg", frame)
#This line saves the captured frame as an image with the filename "captured_image.jpg"

#Display the captured image
# cv2.imshow("Captured Image", frame)
# cv2.waitKey(0)
# cv2.destroyAllWindows()
#These lines display the captured image in a window titled "Captured Image". The waitKey() method waits for a keyboard event, and the destroyAllWindows() method closes all windows.

#$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
# Load the cascade classifier for face detection
#This line loads the cascade classifier for face detection from the OpenCV data directory
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')

# Load the image and convert it to grayscale
img = cv2.imread(r"captured_image.jpg")
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# Detect faces in the image
faces = face_cascade.detectMultiScale(gray, scaleFactor=1.1, minNeighbors=5)
#This line uses the detectMultiScale() method to detect faces in the grayscale image. The scaleFactor parameter controls the image scale to detect faces at different sizes, and the minNeighbors parameter controls the number of neighboring rectangles required to accept a detected face.

# Draw a rectangle around each detected face
for (x, y, w, h) in faces:
    cv2.rectangle(img, (x, y), (x+w, y+h), (1, 1, 1), 2)
#This code draws a rectangle around each detected face in the original color image.

#Display the image with detected faces
# cv2.imshow('image', img)
# cv2.waitKey(0)
# cv2.destroyAllWindows()

import shutil
import os

# Path of the original image file
original_path = r"captured_image.jpg"

# Path of the destination folder where you want to save the image
destination_folder = r"C:\Users\mitta\Image Data\Captured_Image"

# Combine the destination folder path with the filename to create the new path
new_path = os.path.join(destination_folder, os.path.basename(original_path))
#This line copies the original captured image to the new path.
# Copy the file to the new path
shutil.copyfile(original_path, new_path)

# Check if the file was copied successfully
if os.path.exists(new_path):
    print("Image saved successfully!")
else:
    print("Failed to save image.")
    
    
# Save the captured image
cv2.imwrite("captured_image.jpg", img)
# This line saves the captured image as an image with the filename "captured_image.jpg" in the current working directory

# Define the destination path to save the image
destination_folder = r"C:\Users\mitta\Image Data\Face_Detector"

# Combine the destination folder path with the filename to create the new path
new_path = os.path.join(destination_folder, "captured_image.jpg")

# Copy the file to the new path
shutil.copyfile("captured_image.jpg", new_path)

# Check if the file was copied successfully
if os.path.exists(new_path):
    print("Image saved successfully!")
else:
    print("Failed to save image.")


