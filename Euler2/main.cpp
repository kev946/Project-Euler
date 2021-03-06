#include <iostream>
#include <vector>

// Sum the even valued fibonacci terms
// that don't exceed 4,000,000 in value
int main()
{
  int sum = 2, i = 2;
  std::vector<int> terms;
  terms.push_back(1);
  terms.push_back(2);
  while(true)
  {
    int term = terms[i-1] + terms[i-2];
    if(term > 4000000)
    {
      break;
    }
    else
    {
      terms.push_back(term);
      if(term % 2 == 0)
	sum += term;
      i++;
    }
  }
  std::cout << sum << std::endl;
  return 0;
}
