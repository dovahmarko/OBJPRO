#include <iostream>
#include <cstddef>

template <typename T>
inline bool uzl(T a, T b) {
return a < b;
}

template <typename T>
inline bool sil(T a, T b) {
    return a > b;
}

template <typename T>
void srt(T n[], std::size_t v, bool (*cmp)(T, T)) {
for(std::size_t i = 0; i < v - 1; ++i) {
    bool zam = false;
        for(std::size_t j = 0; j < v - i - 1; ++j) {
    if(!cmp(n[j], n[j + 1])) {
            T tmp = n[j];
n[j] = n[j + 1];
            n[j + 1] = tmp;
zam = true;
        }
    }
    if(!zam) break;
}
}

int main() {
int niz1[] = {5, 3, 8, 4, 2};
    std::size_t vel = sizeof(niz1) / sizeof(niz1[0]);
    
    srt(niz1, vel, uzl<int>);
for(std::size_t i = 0; i < vel; ++i) {
std::cout << niz1[i] << " ";
    }
std::cout << std::endl;
    
srt(niz1, vel, sil<int>);
    for(std::size_t i = 0; i < vel; ++i) {
        std::cout << niz1[i] << " ";
}
    std::cout << std::endl;

double niz2[] = {5.5, 3.3, 8.8, 4.4, 2.2};
    vel = sizeof(niz2) / sizeof(niz2[0]);
    
    srt(niz2, vel, uzl<double>);
for(std::size_t i = 0; i < vel; ++i) {
std::cout << niz2[i] << " ";
    }
std::cout << std::endl;
    
srt(niz2, vel, sil<double>);
    for(std::size_t i = 0; i < vel; ++i) {
        std::cout << niz2[i] << " ";
}
    std::cout << std::endl;
    
return 0;
}