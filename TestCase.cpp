#include <iostream>
#include <ostream>
using namespace std;

TestCase::TestCase(string s1, &ostream cerr){//constructor
    s=s1;
    num_failure = counter = 0;
    ostream os = cerr;
}

void TestCase::print(){
    cerr << s << ":" << num_failure << "failed, " << counter-num_failure << "passed, " << counter << "total." << endl;
    cerr << "---" << endl;
}
