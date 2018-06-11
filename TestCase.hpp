#pragma once

#include <sstream>
#include <iostream>
using namespace std;

//#include <assert.h>     /* assert */
using namespace std;


//template<typename T>
class TestCase{
    private:
    string s; 
    int num_failure;  //number of fail tests
    int counter ; //number of all test
    ostream os;
    
    public:

    TestCase(string s, ostream& cerr);
    void print(); //  מדפיסה את תוצאות הבדיקה - כמה בדיקות עברו ונכשלו.


    template <typename T> TestCase& check_equal(T& a, T& b){
        counter++;
        if(a != b){
          cerr << to_string( s +": Failure in test #" + counter ":"+ a + "should equal" + b + "!"); 
          num_failure++;
        }
        return *this;
    }
    
    template <typename T> TestCase& check_different(T& a, T& b){
        counter++;
        if(a == b){
          cerr << to_string( s +": Failure in test #" + counter + ": string value should be"+ a + "but is" + b); //need to change!!!!
          num_failure++;
        }
        return *this;
    }

    template <typename T> TestCase& check_output(T& a, string s){
        counter++;
        ostream new_os;
        new_os << a;
        if(new_os.str(); != s){
          cerr << to_string( s +": Failure in test #" + counter + ": string value should be"+ a + "but is" + b); 
          num_failure++;
        }
        return *this;    
    }
    
    template <typename T, typename function> TestCase& check_function(function f ,T& a, const int b){
        counter++;
        int ans = f(a);
        if(ans != b){
            cerr << to_string(s +": Failure in test #" + counter + ": Function should return" + b + "but returned" + ans + "!");
            num_failure++;
        }
        return *this;
    }
};
