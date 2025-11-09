#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

std::string kalkulasi_digit(long long n){
    std::string s = std::to_string(n);
    std::sort(s.begin(), s.end());
    return s;
}
int main()
{
    std::map<std::string, std::vector<long long>> mapping;
    long long i = 1;

    while (true) {
        long long cube = i * i * i;
        
    }
}