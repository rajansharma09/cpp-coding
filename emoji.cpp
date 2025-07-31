#include <iostream>

int main() {
    // Printing emojis using Unicode escape sequences
    std::wcout << L"Smiling Face: \U0001F600\n";  // 😀
    std::wcout << L"Heart: \U00002764\n";        // ❤️
    std::wcout << L"Thumbs Up: \U0001F44D\n";    // 👍
    std::wcout << L"Fire: \U0001F525\n";         // 🔥

    return 0;
}
