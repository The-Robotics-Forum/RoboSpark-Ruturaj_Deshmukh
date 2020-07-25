from hmac import new

import cv2
import let as let

print(cv2.__version__)

img = cv2.imread(r"C:\Users\tejas\desktop\taskimg\river.jpg",cv2.IMREAD_COLOR)
img1 = cv2.imread(r"C:\Users\tejas\desktop\taskimg\mountain.jpg",cv2.IMREAD_GRAYSCALE)


hsv = cv2.cvtColor(img, cv2.COLOR_RGB2HSV)
cv2.imshow("color",hsv)

img= cv2.resize(img,(400,400))#resizing

cv2.imshow("color",img)#color image
cv2.imshow("grayscale",img1)#grayscale image
ret,thresh = cv2.threshold(img1,150,255,cv2.THRESH_BINARY)#simple thresholding
ret,thresh1 = cv2.threshold(img1,150,255,cv2.THRESH_OTSU)
ret,thresh2 = cv2.threshold(img1,150,255,cv2.THRESH_BINARY_INV)
adaptive_thresh=cv2.adaptiveThreshold(img1,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,5,2)
adaptive_thresh3=cv2.adaptiveThreshold(img1,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,5,2)

#thresholging
cv2.imshow('threshold',thresh)
cv2.imshow('threshold_otsu',thresh1)
cv2.imshow('threshold_inv',thresh2)
cv2.imshow('Adaptive_mean',adaptive_thresh)
cv2.imshow('Adaptive_gaussian',adaptive_thresh3)
cv2.imshow("color",hsv)

print(img.shape)#Printing Shape
print(img.size)#Printing size
print(img)#printing old image
print(img1)#Printing grayscale image


cv2.waitKey(0)
cv2.destroyAllWindows()