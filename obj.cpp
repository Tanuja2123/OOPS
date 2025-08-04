#include <iostream>
using namespace std;

class a{
    int b, c, d;
};
class b{
    char c; char cc; int i; // sequence of strong matters c,c,i= 8 bytesk, c,i,c  =12 bytes

};

int main(){
    a obj;
    cout<<sizeof(obj)<<" "; // 12 size (int size = 4) total size =12
    class empty{};
    empty aa, ab;
    b objj;
    cout<<sizeof(objj); // padding size =8;
//     Then both a and b would  occupy 0 bytes, and the compiler wouldn’t be able to assign them different memory addresses — which violates C++ object model rules.

// 📦 So, the compiler gives it 1 byte of size:
// Just enough to give each instance a unique memory address.

// That byte is not used for storing actual data — it’s just for the object to “exist.”

// 32 bit os - reads 4 byte
// 64 bit os- reads 8 byte once
// no of cycles to read b- 2 cycle to read 8 therefore size;
// compromise memory for fast ans = padding cxxx bbbb (return val fast), b read in one cycle
// reads in segment
// x byte : start memory allocation from multiple of 4
// starting from index 4( int)
// size = char char int =8

// DO GOOD ALIGNMENT FOR SPACE OPTIMISATON: GREEDY APPROACH: FIRST BIG MEMORY STUFF THEN LESS;