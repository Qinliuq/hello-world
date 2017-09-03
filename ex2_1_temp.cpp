#include<iostream>
#include<vector>

class polynomial
{
  public:
    polynomial(int degree) : d(degree) {}
    vector<double> coeff;
    
};
std::ostream &print(std::ostream&, const polynomial&);
