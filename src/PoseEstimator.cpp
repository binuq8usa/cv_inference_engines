#include "PoseEstimator.h"

PoseEstimator::PoseEstimator()
{
    this->initialize();
}

PoseEstimator::~PoseEstimator()
{

}

void PoseEstimator::initialize() {
    this->modelInput = torch::rand({10,1});
    this->modelOutput = torch::rand({12,1});
}

void PoseEstimator::run() {
    std::cout << "Model Input : " << this->modelInput << std::endl;
    std::cout << "Model Output : " << this->modelOutput << std::endl;
}