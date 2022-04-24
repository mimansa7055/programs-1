/*Write a program that prints the numbers from 1 to 100. But for multiples of three print
“Obdure” instead of the number and for the multiples of five print “Infotech”. For
numbers which are multiples of both three and five, print “ObdureInfotech”.*/
#include<stdio.h>
int solve (int a)
{
    for(a=1; a<101; a++)
    {
        if(a%15==0)
        {
            printf("ObdureInfotech\n");
        }
        else if(a%3==0)
        {
            printf("Obdure\n");
        }
        else if(a%5==0)
        {
            printf("Infotech\n");
        }
        else
        {
            printf("%d\n",a);
        }
    }

}
int main()
{
    int a;
    solve(a);
    return 0;
}


//OUTPUT
/*1
2
Obdure
4
Infotech
Obdure
7
8
Obdure
Infotech
11
Obdure
13
14
ObdureInfotech
16
17
Obdure
19
Infotech
Obdure
22
23
Obdure
Infotech
26
Obdure
28
29
ObdureInfotech
31
32
Obdure
34
Infotech
Obdure
37
38
Obdure
Infotech
41
Obdure
43
44
ObdureInfotech
46
47
Obdure
49
Infotech
Obdure
52
53
Obdure
Infotech
56
Obdure
58
59
ObdureInfotech
61
62
Obdure
64
Infotech
Obdure
67
68
Obdure
Infotech
71
Obdure
73
74
ObdureInfotech
76
77
Obdure
79
Infotech
Obdure
82
83
Obdure
Infotech
86
Obdure
88
89
ObdureInfotech
91
92
Obdure
94
Infotech
Obdure
97
98
Obdure
Infotech*/