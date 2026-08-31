#include <stdio.h>

int main() {
    int second, hour, minute,remaining_seconds;

    scanf("%d", &second);

    hour = second / 3600;
    minute = (second % 3600) / 60;
    remaining_seconds = second % 60;

    printf("%d:%d:%d\n", hour, minute, remaining_seconds);

    return 0;
}