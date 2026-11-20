# RP2350 Music Player & Audio Visualizer

An embedded music player and real-time audio visualization system built using the **RP2350B Proton microcontroller**, **Pico C SDK**, and **PlatformIO**.

The system is designed to read WAV audio files from a microSD card, generate audio output through PWM, and visualize audio signals using a TFT LCD and an Adafruit LED strip.

## Features

- **WAV Audio Playback:** Read and process WAV audio files stored on a microSD card using SPI.
- **PWM Audio Output:** Convert digital audio samples into an analog audio signal using PWM and an external low-pass filter.
- **TFT Audio Visualization:** Display audio waveforms and frequency spectrum bars on an ILI9341 TFT LCD.
- **LED Visualization:** Control an Adafruit NeoPixel LED strip using PIO for audio-reactive lighting effects.

## Hardware

| Component | Purpose |
|-----------|---------|
| RP2350B Proton | Main microcontroller |
| microSD Card | WAV audio file storage |
| ILI9341 TFT LCD | Music interface and audio visualization |
| Adafruit NeoPixel LED Strip | Audio-reactive LED visualization |
| Powered Speaker | Audio output |
| RC Low-Pass Filter | PWM audio signal filtering |

## Technologies

- **Language:** C
- **Framework:** Raspberry Pi Pico C SDK
- **Build System:** PlatformIO
- **Microcontroller:** RP2350B
- **Peripherals:** SPI, PWM, PIO
- **Audio Processing:** PCM WAV, FFT

## Getting Started

### Prerequisites

- Visual Studio Code
- PlatformIO IDE extension
- RP2350B Proton development board
- Purdue Debug Probe (Picoprobe)

### Installation

1. Clone the repository:

   ```bash
   git clone <repository-url>
   ```

2. Open the project folder in Visual Studio Code.

3. Build the firmware using **PlatformIO: Build**.

4. Connect the Proton board and Debug Probe.

5. Upload the firmware using **PlatformIO: Upload**.

## Project Structure

```text
├── src/              # Application source files
├── include/          # Header files
├── lib/              # External libraries
├── docs/             # Hardware documentation
├── test/             # Test files
├── platformio.ini    # PlatformIO configuration
└── README.md         # Project documentation
```

## Project Information

Developed as part of **ECE 362: Microprocessor Systems and Interfacing** at Purdue University.

**Team 83**
