#include <iostream>
#include <assert.h>     /* assert */
using namespace std;


template<typename T>
class TestCase{
    
    private:
    
    
    public:
    template <typename T> T& check_equal(T& a, T& b); // בודקת אם שני הארגומנטים שלה שווים, אם לא - מדפיסה הודעת שגיאה
    template <typename T> T& check_different(T& a, T& b); // בודקת אם שני הארגומנטים שונים, כנ"ל
    template <typename T> T& check_output(T& a, string s); // בודקת את אופרטור הפלט של הארגומנט שלה, משווה את התוצאה למחרוזת נתונה
    template <typename T> T& check_function(T& a, T& b); //  בודקת פונקציה כללית כלשהי עם ארגומנט אחד.
    template <typename T> void print(); //  מדפיסה את תוצאות הבדיקה - כמה בדיקות עברו ונכשלו.
    
};




    template <typename T> T& check_equal(T& a, T& b){
        asser
    }
