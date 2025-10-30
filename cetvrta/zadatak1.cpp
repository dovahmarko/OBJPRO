#include <iostream>
#include <vector>

void unos_vek(std::vector<int>& v) {
    int br;
    while (std::cin >> br && br != 0) {
        v.push_back(br);
    }
}

void isp_vek(const std::vector<int>& v) {
    for (int el : v) {
        std::cout << el << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> vek;
    std::cout << "Unesi brojeve (0 za kraj): ";
    unos_vek(vek);
    std::cout << "Vektor: ";
    isp_vek(vek);
    return 0;
}