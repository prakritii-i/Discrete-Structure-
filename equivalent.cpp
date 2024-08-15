#include <stdio.h>

int main() {
    int p, q, r, notporq;

    printf("p\tq\tp&q\t p|q\t!q\t!p\t!p|q\t!p|q==p&q\n");
    
    // Loop through all combinations of p, q, and r
    for (p = 0; p < 2; p++) {
        for (q = 0; q < 2; q++) {
           // for (r = 0; r < 2; r++) {
                // Evaluate expressions
                int p_and_q = p & q;
                int p_or_q = p | q;
                int not_q = !q;
                int not_p = !p;
                notporq = !p | q;

                printf("%d\t%d\t%d\t%d\t%d\t%d\t%d", p, q, p_and_q, p_or_q, not_q, not_p, notporq);

                // Check for equivalence and print result
                if (notporq == p_and_q) {
                    printf("\t equivalent \n");
                } else {
                    printf("\t not equivalent \n");
                }
            
        }
    }

    return 0;
}

