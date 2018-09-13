/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 30 de septiembre de 2017, 11:12
 */
#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each(
        in(std::cin), in(), std::cout << (_1 * 3) << " " );
}
