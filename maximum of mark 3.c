#include <stdio.h>
int main() {
    int m1, m2, m3;
    printf("Enter 3 Marks: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    if (m1 >= m2 && m1 >= m3) printf("Highest = %d\n", m1);
    else if (m2 >= m1 && m2 >= m3) printf("Highest = %d\n", m2);
    else printf("Highest = %d\n", m3);

    return 0;
}
