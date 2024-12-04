#ifndef POSEESTIMATOR_H
#define POSEESTIMATOR_H

#pragma once

#include <torch/torch.h>

class PoseEstimator
{
public:
    PoseEstimator();
    ~PoseEstimator();

    void initialize();
    void run();
    void getResults();
    
private:
    torch::Tensor modelInput;
    torch::Tensor modelOutput;
    void* _model;
};

#endif