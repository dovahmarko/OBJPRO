#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

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

void jed_elm(std::vector<int>& org, std::vector<int>& jed) {
    for (int el : org) {
        if (std::find(jed.begin(), jed.end(), el) == jed.end()) {
            jed.push_back(el);
        }
    }
}

void sort_apv(std::vector<int>& v) {
    std::sort(v.begin(), v.end(), [](int a, int b) {
        return std::abs(a) < std::abs(b);
    });
}

int main() {
    std::vector<int> org_vek;
    std::cout << "Unesite brojeve (0 za kraj): ";
    unos_vek(org_vek);

    std::cout << "Originalni vektor: ";
    isp_vek(org_vek);

    std::vector<int> jed_vek;
    jed_elm(org_vek, jed_vek);

    std::cout << "Jedinstveni elementi: ";
    isp_vek(jed_vek);

    sort_apv(jed_vek);

    std::cout << "Sortirani po apsolutnoj vrijednosti: ";
    isp_vek(jed_vek);

    return 0;
}