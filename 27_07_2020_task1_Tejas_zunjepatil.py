import cv2
import numpy as np

cap = cv2.VideoCapture(0)
feature_p = dict( maxCorners = 100,
                  qualityLevel = 0.3,
                  minDistance = 7,
                  blockSize = 7)

lk_p = dict( winSize = (15,15),
             maxLevel = 2,
             criteria = (cv2.TERM_CRITERIA_EPS | cv2.TERM_CRITERIA_COUNT, 10,0.03))

color = np.random.randint(0,255, (100,3))
ret,old_frame = cap.read()
old_gray = cv2.cvtColor(old_frame, cv2.COLOR_BGR2GRAY)
p0 = cv2.goodFeaturesToTrack(old_gray,
                             mask= None, **feature_p)
mask = np.zeros_like(old_frame)
while(1):
    ret,frame = cap.read()
    frame_gray = cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
    p1,st,err = cv2.calcOpticalFlowPyrLK(old_gray,
                                         frame_gray,p0, None, **lk_p)
    good_new = p1[st==1]
    good_old = p0[st==1]

for i, (new,old) in enumerate(zip(good_new,good_old)):
    a,b = new.ravel()
    c,d = old.ravel()
    if a-c > 0 :
        print("LEFT")
    else:
        print("RIGHT")

        img = cv2.add(frame,mask)
        cv2.imshow('frame',img)

        k = cv2.waitKey(1)
        if k == 32:
            break

            old_gray = frame_gray.copy()
            p0 = good_new.reshape(-1,1,2)

cv2.destroyAllWindows()
cap.release()