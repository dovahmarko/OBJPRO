#include <iostream>
#include <cstddef>

inline bool asc(int a, int b) {
return a < b;
}

inline bool dsc(int a, int b) {
    return a > b;
}

void srt(int n[], std::size_t v, bool (*cmp)(int, int)) {
for(std::size_t i = 0; i < v - 1; ++i) {
    bool zam = false;
        for(std::size_t j = 0; j < v - i - 1; ++j) {
    if(!cmp(n[j], n[j + 1])) {
            int tmp = n[j];
n[j] = n[j + 1];
            n[j + 1] = tmp;
zam = true;
        }
    }
    if(!zam) break;
}
}

int main() {
int niz[] = {5, 3, 8, 4, 2};
    std::size_t vel = sizeof(niz) / sizeof(niz[0]);
    
    srt(niz, vel, asc);
for(std::size_t i = 0; i < vel; ++i) {
std::cout << niz[i] << " ";
    }
std::cout << std::endl;
    
srt(niz, vel, dsc);
    for(std::size_t i = 0; i < vel; ++i) {
        std::cout << niz[i] << " ";
}
    std::cout << std::endl;
    
return 0;
}