#include "WaveWizard.h"
#include <iostream>
#include <cstdlib>

WaveWizard::WaveWizard(const std::string& inputFile, const std::string& outputFile, int bitrate)
    : inputFile(inputFile), outputFile(outputFile), bitrate(bitrate) {}

bool WaveWizard::convert() {
    std::string command = "ffmpeg -i \"" + inputFile + "\" -b:a " + std::to_string(bitrate) + "k \"" + outputFile + "\"";
    int result = std::system(command.c_str());
    return result == 0; // Return true if conversion was successful
}
