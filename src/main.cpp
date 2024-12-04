#include <iostream>
#include <PoseEstimator.h>
#include <thread>

int main() {
  PoseEstimator poseEstimator;

  // create a thread to run the function
  std::thread t1(&PoseEstimator::run, &poseEstimator);
  
  t1.join();

}

