int add(const int& a, const int& b) {
    return a + b;
}

int subtract(const int& a, const int& b) {
    return a - b;
}

int multiply(const int& a, const int& b) {
    return a * b;
}

int division(const int& a, const int& b) {
    if (b != 0) {
        return a / b;
    }
    else {
        return 0;
    }
}