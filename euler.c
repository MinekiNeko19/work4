int problem1() {
    int sum = 0;
    int x;
    for (x = 0; x < 1000; x++) {
        if ((x % 3 == 0) || (x % 5 == 0)) {
            sum += x;
        }
    }
    return sum;
}

int problem5() {
    int ans;
    int found = 1;
    int x;
    for (ans=2520; found != 0; ans++) {
        found = 0;
        for (x = 1; x < 21; x++) {
            if ((ans % x) != 0) {
                found = 1;
                x = 21;
            }
        }
    }
    // it adds an extra 1 before terminating?
    return ans-1;
}