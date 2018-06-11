#include <iostream>
#include <ostream>
#include <string>
//#include <assert.h>     /* assert */
using namespace std;


class TestCase{
    private:
    string s; 
    int num_failure;  //number of fail tests
    static int counter; //number of all test
    ostream os;
    
    public:
    TestCase(string s, ostream& cerr);
    void print(); // מדפיסה את תוצאות הבדיקה - כמה בדיקות עברו ונכשלו
};

    template <typename T> TestCase& check_equal(T& a, T& b){ //בודקת אם שני הארגומנטים שלה שווים, אם לא - מדפיסה הודעת שגיאה
        counter++;
        if(a != b){
          cerr << to_string( s +": Failure in test #" + counter ":"+ a + "should equal" + b + "!"); 
          num_failure++;
        }
        return *this;
    }
    
    template <typename T> TestCase& check_different(T& a, T& b){ //בודקת אם שני הארגומנטים שונים, כנ"ל
        counter++;
        if(a == b){
          cerr << to_string( s +": Failure in test #" + counter + ": string value should be"+ a + "but is" + b); //need to change!!!!
          num_failure++;
        }
        return *this;
    }

    template <typename T> TestCase& check_output(T& a, string s){ //בודקת את אופרטור הפלט של הארגומנט שלה, משווה את התוצאה למחרוזת נתונה
        counter++;
        if(){
          cerr << to_string( s +": Failure in test #" + counter + ": string value should be"+ a + "but is" + b); 
          num_failure++;
        }
        return *this;    
    }
    
    template <typename T, typename function> TestCase& check_function(function f ,T& a, const int b){ //בודקת פונקציה כללית כלשהי עם ארגומנט אחד
        counter++;
        int ans = f(a);
        if(ans != b){
            cerr << to_string(s +": Failure in test #" + counter + ": Function should return" + b + "but returned" + ans + "!");
            num_failure++;
        }
        return *this;
    }
    
