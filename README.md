# red-blue-box
 
This is a program that calculate the score of the Red and Blue box as per the some condition.
We have two types of boxes, One is a blue box (B) and another is a red box (R). The red box
will give 10 points  while the blue box will give 20 points.



1.First Generating a random string of characters R and B of random length by using rand() functon in c++. like RBBRBB, RBR
BBR, etc
2. Calculating the score of this randomly generated string as per some condition
3. Scores will get calculated if the randomly genrated string is RBRB the point is calculated as R(10) + B(20) + R (10) + B(20) = 60.
if there are three R's coming consecutively then scoring will take place in different way like if we got the string like RRR
Scoring -> R(10) + R(20) + R(30) -> Basically 2nd consecutive R will give you 2 * actual
points, 3rd consecutive R will 3 * actual points, and so on..


Here is my replit link : https://replit.com/@mrabelantony/red-and-blue

#ScreenShots


![Capture1](/ScreenShots/1.png)
![Capture1](/ScreenShots/2.png)
![Capture1](/ScreenShots/3.png)
