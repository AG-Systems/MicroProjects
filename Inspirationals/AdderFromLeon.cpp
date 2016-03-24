#include <bitset>
#include <iostream>
 
int main()
{
	unsigned int x = 233;
	unsigned int y = 883;
	std::bitset<32> xbits{x};
	std::bitset<32> ybits{y};
	std::bitset<32> result{0};
	result[0] = xbits[0] ^ ybits[0];
	int carry = xbits[0] & ybits[0];
 
	for (int i = 1; i < xbits.size(); i++)
	{
		result[i] = (xbits[i] ^ ybits[i]) ^ carry;
 
		carry = (xbits[i] & ybits[i] & ~carry) 
			  | (xbits[i] & ybits[i] & carry) 
			  | (xbits[i] & ~ybits[i] & carry)
			  | (~xbits[i] & ybits[i] & carry); 
	}
	std::cout << x << "+" << y << "=" << result.to_ulong() << std::endl;
}
