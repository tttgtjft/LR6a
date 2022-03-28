#include <iostream>

void infinityPause() {
    while (true) {}
}

int main() {
    std::setvbuf(stdout, nullptr, _IOFBF, 512);

    std::cout << "aaaaaa\n";
    infinityPause();

    return 0;
}
