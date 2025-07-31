#include <iostream>
#include <chrono>
#include <thread>
#ifdef _WIN32
#include <windows.h>
#endif

void playBeat(int frequency, int duration) {
#ifdef _WIN32
    Beep(frequency, duration);
#else
    std::cout << "Beat!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(duration));
#endif
}

int main() {
    std::cout << "Playing music beat..." << std::endl;

    int bpm = 1200; // Beats per minute
    int beatDuration = 600000 / bpm; // Convert BPM to milliseconds

    for (int i = 0; i < 120; ++i) { // Play 8 beats
        playBeat(500, beatDuration); // 440Hz for a standard A note
        std::this_thread::sleep_for(std::chrono::milliseconds(3)); // Small gap between beats
    }

    std::cout << "Done!" << std::endl;
    return 0;
}

