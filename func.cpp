int getMaxArray(int Int[], int size) {

    int max = -2147483648;

    for (int i = 0; i < size; i++) {
        if (Int[i] > max) { max = Int[i]; }
        else { max = max; }
    }

    return max;
}

float getMaxArray(float Float[], int size) {

    int max = 1.17549e-038;

    for (int i = 0; i < size; i++) {
        if (Float[i] > max) { max = Float[i]; }
        else { max = max; }
    }

    return max;
}

double getMaxArray(double Double[], int size) {

    int max = 2.22507e-308;

    for (int i = 0; i < size; i++) {
        if (Double[i] > max) { max = Double[i]; }
        else { max = max; }
    }

    return max;
}