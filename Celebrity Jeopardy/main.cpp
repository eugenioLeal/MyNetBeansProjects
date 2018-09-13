/* 
 * File:   main.cpp
 * Author: eugenioLeal
 *
 * Created on 21 de enero de 2017, 14:03
 */

#include <stdio.h>

using namespace std;

int main()
{
    char s[128];
    
    while(fgets(s,128,stdin)){
        printf("%s",s);
    }
    return 0;
}

