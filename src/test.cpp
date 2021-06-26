#include "cryptochief.h"
using namespace std;

int main() {
    return CryptoChief::hash("hi", "SHA3-512");
    // return CryptoChief::encrypt("hi", "key here");
    // return 0;
}