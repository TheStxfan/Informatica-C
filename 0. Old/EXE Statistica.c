#include <stdio.h>
#include <stdlib.h>

void main() {

    int s = 0, s2 = 0, n = 0, min = 0, max = 0, x = 0;
    float e, m2, var;
    int v[100], m, i, j, count, maxc=0;

    scanf("%d", &x);

    min = max = x;

    while (x != 0) {
        v[n++] = x;
        s2 += x * x;
        s += x;

        if (x > max) {
            max = x;
        } else if (x < min) {
            min = x;
        }

        // max=x>max?x:max; min=x<min?x:min;

        scanf("%d", &x);
    }
    
    e=s/(float)n;
    m2=s2/(float)n;
    var=m2-e*e;
}