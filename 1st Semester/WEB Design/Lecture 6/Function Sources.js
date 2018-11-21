function calculate() {
    let x = 1;
    window.prompt("x = ");
    if (x >= 1 && x <= 10) {
        return 2 * x;
    } else if (x === 20) {
        return (1 / (2 * x));
    } else {
        return x ^ 2;
    }
}