#include<iostream>
#include <cstring>

using namespace std;

int main (){

    const char *Number_AsRomanString( int iNumber ){
        struct RomanDigit_t    {
            char *m_psString;
            int m_iValue;
        };

        static const RomanDigit_t RomanDigits[]=            {
                        {"M",  1000},
                        {"CM",  900},
                        {"D",   500},
                        {"CD",  400},
                        {"C",   100},
                        {"XC",   90},
                        {"L",    50},
                        {"XL",   40},
                        {"X",    10},
                        {"IX",    9},
                        {"V",     5},
                        {"IV",    4},
                        {"I",     1},
                };


        static char sRomanString[20];
        sRomanString[0] = '\0';

        for (int i=0; iNumber && i<sizeof(RomanDigits)/  sizeof(RomanDigits[0]); i++)  {
            while ( RomanDigits[i].m_iValue <= iNumber ) {
                strcat( sRomanString, RomanDigits[i].m_psString );
                iNumber -= RomanDigits[i].m_iValue;
            }
        }

        return sRomanString;
    }

    return  0;
}