#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
    long double d1, d2 = 3.76, d3 = 19.543, d4 = 225.43;
    for (int i=0;i<6;i++) 
    {
        for (int k=0;k<12;k++) 
        {
            for (d1=0;d1<7324578;d1=d1+1) 
            {
                d2 = d2 * 3.23;
                d2 = d2 * 1123.4;
                d2 = d2 + 34.76;
                d3 = d3 + 86.4 * 122.12;
                d4 = d4 + (d3/125.56);
            }
        }
    }
    printf(1, "test program ended\n");
    exit();
}