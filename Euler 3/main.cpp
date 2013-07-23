#include <iostream>

bool isPrime(long long n)
{
  if(n < 2) return false;
  if(n == 2) return true;
  if(n % 2 == 0) return false;
  for(long long  i = 3; (i*i) <= n; i+=2)
    if(n % i == 0) 
      return false;
  return true;
}

int main()
{
  long long num = 600851475143;
  long long n = 3;
  int largestPrime = 0;
  while(num >= n)
  {
    if(isPrime(n) && num % n == 0)
    {
      largestPrime = n;
      num = num / n;
    }
    else
    {
      n += 2;
    }
  }
  std::cout << largestPrime << std::endl;
  return 0;
}

