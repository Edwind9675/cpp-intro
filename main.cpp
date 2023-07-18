#include <iostream>

  int subtract(int x, int y){
  return x - y;

  }
  int multiply(int x, int y){
    return x*y;
  }
  int divide(int x, int y){
    return x/y;
  }
int main()
{
  std::cout << "Hello, world!" << std::endl;
  std::cout << "My name is Eddie and this is room 115" << std::endl;

  int x = 5;
  int y = 7;
  int z = 4;
  int w = 3;
  int v = 2;
  std::cout << "The sum of " << x << " and " << y << " is " << x + y << std::endl;
  std::cout << "The sum of " <<x<<" and "<<y<<" and "<<z<<" is " << x + y +z << std::endl;
   std::cout << "The product of " <<x<<" and "<<y<<" and "<<z<<" and "<<w<<" is " << x * y *z *w<< std::endl;
    std::cout << "The quotient of " <<x<<" and "<<y<<" and "<<v<<" is " << x / y / v << std::endl;
    int q = multiply(x, y);
    int u = multiply(z, w);
    int r = multiply(q, u);
  int t = divide(x, y);
  int f = divide (t, v);

 return 0;


}