import cv2
import numpy as np

original = cv2.imread(r"C:\Users\shree technology\Downloads\Day 2\Task Image\rose_flower.jpg")
res = cv2.resize(original, (840,600))

bgrl = np.array([90, 0, 120], np.uint8)
bgrh = np.array([215, 255, 255], np.uint8)

mask = cv2.inRange(res, bgrl, bgrh)
#Flower pot
original = cv2.ellipse(res,(170,500),(90,90), 0,0, 180, 128, -1)
original = cv2.rectangle(res,(80,270),(261,500),(128,0,0),-1)

#Blurring
kernel = np.array(([0, 0, 0], [0, 1, 0], [0, 0, 0]), np.uint8)

blurred = cv2.filter2D(mask, -1, kernel)#filter2D blurring
avg = cv2.blur(mask, (5, 5))#average blurring
guas_blur = cv2.GaussianBlur(mask, (5, 5), 0)#Guassian blurring
median = cv2.medianBlur(mask, 7)#median blur blurring
bilateral = cv2.bilateralFilter(res, 5, 111, 111)

cv2.imshow("original", res)
cv2.imshow("masked original", mask)
cv2.imshow("blurred", blurred)

cv2.imshow("avg", avg)
cv2.imshow("guas_blur", guas_blur)
cv2.imshow("median", median)
cv2.imshow("bilateral", bilateral)

font = cv2.FONT_HERSHEY_TRIPLEX
cv2.putText(original,'ROSE',(150,200),font, 5,(165,42,42),5,cv2.LINE_AA)
cv2.imshow("original", res)

cv2.waitKey(0)
cv2.destroyAllWindows()
