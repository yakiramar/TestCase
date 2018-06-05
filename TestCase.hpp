#include <iostream>
#include <ostream>
#include <assert.h>     /* assert */
using namespace std;


template<typename T>
class TestCase{
    
    private:
    string s; 
    int num;  //number of test
    
    
    public:
    TestCase(string s, ostream& cerr);
    template <typename T> TestCase& check_equal(T& a, T& b); // בודקת אם שני הארגומנטים שלה שווים, אם לא - מדפיסה הודעת שגיאה
    template <typename T> TestCase& check_different(T& a, T& b); // בודקת אם שני הארגומנטים שונים, כנ"ל
    template <typename T> TestCase& check_output(T& a, string s); // בודקת את אופרטור הפלט של הארגומנט שלה, משווה את התוצאה למחרוזת נתונה
    template <typename T> TestCase& check_function(T& a, T& b); //  בודקת פונקציה כללית כלשהי עם ארגומנט אחד.
    template <typename T> void print(); //  מדפיסה את תוצאות הבדיקה - כמה בדיקות עברו ונכשלו.
    
};

    TestCase(string s1, &ostream cerr){//constructor
        s=s1;
        
    }



    template <typename T> TestCase& check_equal(T& a, T& b){
        if(a!=b){
           cerr << to_string( s +": Failure in test #1:"+ a + "should equal" + b + "!"); 
        }

        return *this;

    }
    
    template <typename T> TestCase& check_different(T& a, T& b){
        if(a==b){
           cerr << to_string( s +": Failure in test #2:"+ a + "should be different" + b + "!"); 
        }

        return *this;
    }
