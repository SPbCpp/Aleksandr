//???? 4. ????? ????? ???????

//??????? 1

//???????? ???????, ??????? ?????????? Factorial.??? ??????
//?????????? int, ????????? int ? ?????????? ????????? ?????? ?????????.
//?????????????, ??? ???????? ??????? ????????? ? ???????? ?? - 10 ?? 10.
//??? ????????????? ?????????? ? ???? ??????? ?????? ?????????? 1.
//
//???????? ???????	?????????
//        1            	1
//        -2           	1
//        4             24
//        0             1
//??? ????? ????????????? ??? ???
//???????? ???????? ??????? Factorial, ??????? ?? ? ??????????
//??????????? ? ????????? ?????????? ??????? ? ?????????? ??????????.
//??????? main ????? ???????? ?? ?????? ?? ?????????.

#include <iostream>

using namespace std;

int Factorial(int x)
{
    int factorial = 1;
    if (x <= 0 || x == 1)// ????? ????????? ????????? ????? ? ?????????? ?????????? ????????
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= x; i++)
        {
            factorial = factorial * i;
        }
        return factorial;
    }
}

int main()
{
    int x = Factorial(4);

    cout << x << endl;

    return 0;
}