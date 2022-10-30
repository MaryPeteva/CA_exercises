#include"task18H.h"

int ackermanFunc(int m, int n)
{
    if( m == 0 )
    {
        return n + 1;
    }
    else if ((m > 0) && (n == 0))
    {
        return ackermanFunc(m - 1, 1);
    }
    else if((m > 0) && (n > 0))
    {
        return ackermanFunc(m - 1,ackermanFunc(m, n - 1) );
    }
    
}