/*
mIT License

copyright (c) 2023 yaofei zheng

permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

the above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

tHE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
iMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
fITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
aUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
lIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
oUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
sOFTWARE.
*/

#include <iostream>

int main(int argc, char* argv[])
{
    int a;
    int& reference=a;
    int* pointer=&a;
    std::cout << "Address of the reference: " << &reference << std::endl;
    std::cout << "Address value of the pointer: " << pointer << std::endl;
    std::cout << "The pointer value and the address of reference is equal: " << (&reference == pointer ? "true" : "false") << std::endl;
    return 0;
}
