#!/usr/bin/env python
# coding: utf-8

# In[ ]:


import cv2
img = cv2.imread(r"C:\Users\ryans\Pictures\text.jpg", cv2.IMREAD_UNCHANGED)
img_gray=cv2.cvtColor(img,cv2.COLOR_RGB2GRAY)
img_hsv=cv2.cvtColor(img,cv2.COLOR_RGB2HSV)
re=cv2.resize(img,(500,500))
print("Original image size : ",img.size)
print("Resized Image size :",re.size)
cv2.imshow("Resized",re)
cv2.imshow("Grayscale ",img_gray)
cv2.imshow("HSV",img_hsv)
cv2.waitKey(0)
cv2.destroyAllWindows()

ret,thre=cv2.threshold(img_gray,150,255,cv2.THRESH_OTSU)
ret,thre1=cv2.threshold(img_gray,150,255,cv2.THRESH_BINARY)
ret,thre2=cv2.threshold(img_gray,150,255,cv2.THRESH_BINARY_INV)
ret,thre3=cv2.threshold(img_gray,150,255,cv2.THRESH_TOZERO)

adap_thre=cv2.adaptiveThreshold(img_gray,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,5,3)
adap_thre2=cv2.adaptiveThreshold(img_gray,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,7,7)
cv2.imshow("bin",thre1)
cv2.imshow("otsu",thre)
cv2.imshow("binv",thre2)
cv2.imshow("zero",thre3)
cv2.imshow("ada1",adap_thre)
cv2.imshow("ada2",adap_thre2)
cv2.waitKey(0)
cv2.destroyAllWindows() 

