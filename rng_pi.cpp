#include <iostream>
#include <stdlib.h>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
    clock_t start{clock()};
    srand(123);
    
    const unsigned long int n{1000000};
    unsigned long int count{0};
    
    const int initial{0};
    
    vector <vector<double>> x(n, vector<double>(2, initial));
    
    for (auto &i: x){
        i.at(0) = static_cast<double>(rand())/RAND_MAX;
        i.at(1) = static_cast<double>(rand())/RAND_MAX;
        //cout<<i.at(0)<<", "<<i.at(1);
        //cout<<"\n";
        if (i.at(0)*i.at(0)+i.at(1)*i.at(1)<=1)
            count++;
    }
    
    cout<<"Estimated Pi is " << 4*static_cast<double>(count)/n << ".\n";

    cout<<"Run time is " << (clock() - start) / static_cast<double>(CLOCKS_PER_SEC/ 1000)<<"ms.\n";
    
    return 0;
}
