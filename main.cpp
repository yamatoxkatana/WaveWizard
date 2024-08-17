#include <iostream>
#include "WaveWizard.h"

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <input_file> <output_file> <bitrate>" << std::endl;
        return 1;
    }

    std::string inputFile = argv[1];
    std::string outputFile = argv[2];
    int bitrate = std::stoi(argv[3]);

    WaveWizard converter(inputFile, outputFile, bitrate);
    if (converter.convert()) {
        std::cout << "Conversion successful: " << outputFile << std::endl;
    } else {
        std::cerr << "Conversion failed." << std::endl;
    }

    return 0;
}
