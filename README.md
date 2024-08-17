# WaveWizard :musical_note:

### Features

- Convert low-quality MP3 files to high quality custom bitrate
- Cross platform compatibility with FFmpeg

### Installation

1. Install FFmpeg
```bash
sudo apt-get install ffmpeg
```

2. Compile the program
   
```bash
g++ -o wave_wizard main.cpp WaveWizard.cpp
```

### Usage

```bash
./wave_wizard <input_file> <output_file> <bitrate>
```


### Command-Line Arguments

- `<input_file>`: Path to low-quality MP3 file
- `<output_file>`: Name of high-quality output file
- `<bitrate>`: Desired bitrate in kbps (e.g., 192)

### Examples

1. Basic conversion:

```bash
./wave_wizard input.mp3 output.mp3 192
```

3. Higher quality:
```bash
./wave_wizard song.mp3 high_quality.mp3 320
```

### License
This project is licensed under the [MIT License](LICENSE).

### Contact
 - Github: [thetentomushi](github.com/thetentomushi)
 
