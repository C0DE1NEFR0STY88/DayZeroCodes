#include <iostream>
#include <bitset>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string line;
    cout << "Enter binary string: ";
    getline(std::cin, line);

    istringstream in(line);
    bitset<8> bs;
    
    while(in >> bs)
        std::cout << char(bs.to_ulong());
    
    return 0;
}
