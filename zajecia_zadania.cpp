#include <iostream>
#include "make_random_vector.hpp"
#include <vector>


struct foo
{
    template<typename T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};

struct foo2
{
    int stan=0;
    

    template<typename T>
    bool operator()(T const &a, T const &b) const { return a > b; stan++;}
};

int number;

int main(){
//ZAD1
/*
std::vector<int> v(10);
v = make_random_vector(10,0,100);
for(const int& e : v)
    std::cout << e<<" ";
std::cout<<'\n';

std::sort(v.begin(), v.end());

for(const int& e : v)
    std::cout << e<<" ";
std::cout<<'\n';
*/
//ZAD2
/*
std::vector<int> v(100);
v = make_random_vector(100,0,10);

int ile_siedem = std::count(v.begin(),v.end(),8);
std::cout << "7: "<<ile_siedem<<std::endl;
*/
//ZAD 3
/*
std::vector<int> v(10);
v = make_random_vector(10,0,10);

for(const int& e:v){std::cout<<e<<" ";}
std::cout<<'\n';
std::sort(v.begin(),v.end(),foo());

for(const int& e:v){std::cout<<e<<" ";}
std::cout<<'\n';
*/
//ZAD 4
/*
std::vector<int> v(10);
v = make_random_vector(10,0,10);

for(const int& e:v){std::cout<<e<<" ";}
std::cout<<'\n';

int ile_siedem = std::count_if(v.begin(),v.end(),[](int i) {return i >7;});
std::cout<< "wiecej niz 7 jest: "<<ile_siedem<<std::endl;
*/
//ZAD 5
/*
std::cin >> number;
std::vector<int> v(10);
v = make_random_vector(10,0,10);

for(const int& e:v){std::cout<<e<<" ";}
std::cout<<'\n';

int ile_number = std::count_if(v.begin(),v.end(),[](int i) {return i >number;});
std::cout<< "wiecej niz 7 jest: "<<ile_number<<std::endl;
*/


//ZAD 7

std::cin >> number;
std::vector<int> v(10);
v = make_random_vector(10,0,10);

for(const int& e:v){std::cout<<e<<" ";}
std::cout<<'\n';

int ile_number = std::count_if(v.begin(),v.end(),[&](int i) {return i >number;});
std::cout<< "wiecej niz 7 jest: "<<ile_number<<std::endl;
}