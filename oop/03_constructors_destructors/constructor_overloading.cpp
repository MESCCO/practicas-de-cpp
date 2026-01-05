/**
 * ═══════════════════════════════════════════════════════════════════════
 *       Constructor Overloading | Sobrecarga de Constructores
 * ═══════════════════════════════════════════════════════════════════════
 * 
 *    [EN] Multiple constructors with different parameters
 *    [ES] Múltiples constructores con diferentes parámetros
 * 
 *    Author: MESCCO
 *    Date: January 2026
 * ═══════════════════════════════════════════════════════════════════════
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

class Date{
    private:  //Attributes | Atributos
    int year;
    int month;
    int day;
    public: //Method | Metodos
    Date(int,int,int);//Constructor one | Constructor uno
    Date(long);//Constructor two | Constructor dos
    void show_date();
};
//   1/1/2026 ------ 20260101

//Constructor one | Constructor uno
Date::Date(int _year,int _month,int _day){
    year = _year;
    month = _month;
    day = _day;
}
//Constructor two | Constructor dos
Date::Date(long _date){
    year = int(_date /10000); //Extract the year |Extraer el año
    month = int((_date - (year*10000))/100); //Extract the month | Extraer el mes
    day = int(_date-((year*10000)+(month*100))); //Extract the day |Extraer el dia
}

void Date::show_date(){
    cout<<"The date is: "<< day << "/"<<month<<"/"<<year<<endl;
}

int main(){
    Date p1 = Date(2026,01,01);
    Date p2(20260101);
    
    p1.show_date();
    p2.show_date();

    system("pause");
    return 0;
}