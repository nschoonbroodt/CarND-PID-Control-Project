# PID control project

## Video preview

Here is a youtube video of my drive.

[![Result in video](https://img.youtube.com/vi/ehwTnDDvQGg/0.jpg)](https://www.youtube.com/watch?v=ehwTnDDvQGg)

## Answer to Rubric Questions

### What does each part of the controler do?

- The P part of the controler drives the car towards the center of the road. The further from the center the car is, the larger the correction angle is.

- The D part of the controler reduce the oscillation due to the P part. A pure P controler on a straight line (without any noise/dissipation) would take the car from the left side of the road to the right side, and then to the left side, ... with always the same amplitude. The D part allows to reduce these oscillations, and at some point, the car will be stable on the center.

- The I part of the controler allows to compensate for a constant bias. If the "0 angle" steering wheel position had a small tire offset (due to bad geometry of the car), the I part would compensate for it. In the same manner, the I part will compensate for the curvature of the road, if it is constant.

### Gain tuning

I have "manually" tuned the gain, trying to first find a good value for the P gain, which took the car towards the center not to slowly and not to fast. Then I have tried to find a D gain which damped the oscillations at the begining of the track. Then I have tried to find a I gain allowing the car to pass the curves of the track. Then I tried to manually improve these values with some small changes. If finally stopped at
- kp = 0.14
- kd = 4.0
- ki = 0.002

There are probably better values, but these work to make the full track!
