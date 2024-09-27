#pragma once

namespace ml {

class DenseLayer {
public:
    DenseLayer() = delete;

    DenseLayer(const std::size_t nodeCount, const std::size_t weightCount);

    std::size_t nodeCount() const;

    std::size_t weightCount() const;
    
    const::vector<double>& bias() const;
    const::vector<double>& outout() const;
    const::vector<double>& error() const;


private:

    std::vector<double>& myBias() const;
    std::vector<double> myOutput; // Holds the output value for each node.
    std::vector<double> myError;  // Holds the error value of each node.
    std::vector<std::vector<double>> myWeights;

    Nodes nodes_;
    Weights weights_;
};

} // namespace ml
