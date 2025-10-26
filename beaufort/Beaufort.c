#include <stdio.h>

int main(void) {
    float v_ms;
    float kn;
    int B;
    const char *name;

    printf("Podaj predkosc wiatru w m/s: ");
    scanf("%f", &v_ms);

    kn = v_ms * 1.94384;

    if (kn < 1) {
        B = 0; name = "Calm";
    } else if (kn < 4) {
        B = 1; name = "Light Air";
    } else if (kn < 7) {
        B = 2; name = "Light Breeze";
    } else if (kn < 11) {
        B = 3; name = "Gentle Breeze";
    } else if (kn < 17) {
        B = 4; name = "Moderate Breeze";
    } else if (kn < 22) {
        B = 5; name = "Fresh Breeze";
    } else if (kn < 28) {
        B = 6; name = "Strong Breeze";
    } else if (kn < 34) {
        B = 7; name = "Near Gale";
    } else if (kn < 41) {
        B = 8; name = "Gale";
    } else if (kn < 48) {
        B = 9; name = "Strong Gale";
    } else if (kn < 56) {
        B = 10; name = "Storm";
    } else if (kn < 64) {
        B = 11; name = "Violent Storm";
    } else {
        B = 12; name = "Hurricane";
    }
    printf("\nPredkosc: %.2f m/s = %.2f kn\n", v_ms, kn);
    printf("Sila wiatru: B = %d (%s)\n", B, name);

    return 0;
}