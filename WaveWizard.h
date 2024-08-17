#ifndef WAVEWIZARD_H
#define WAVEWIZARD_H

#include <string>

class WaveWizard {
public:
    WaveWizard(const std::string& inputFile, const std::string& outputFile, int bitrate);
    bool convert();

private:
    std::string inputFile;
    std::string outputFile;
    int bitrate;
};

#endif // WAVEWIZARD_H
