function calculate() {
    let x = parseInt(window.prompt("x = "));
    if (x >= 1 && x <= 10) {
        document.write(2 * x);
    } else if (x === 20) {
        document.write(1 / (2 * x));
    } else {
        document.write(Math.pow(x, 2));
    }
}

function fillTable() {
    let x = prompt("x = ");
    for (let i = 1; i <= x; i++) {
        let table = document.getElementById("table");
        let row = table.insertRow(i);
        let cell1 = row.insertCell(0);
        let cell2 = row.insertCell(1);
        let cell3 = row.insertCell(2);

        cell1.textContent = i;
        cell2.textContent = Math.pow(i, 2);
        cell3.textContent = 1 / Math.pow(i, 2);
    }
}

function executeOperation() {
    let number1 = parseInt(window.prompt("x = "));
    let number2 = parseInt(window.prompt("y = "));
    let operation = window.prompt("Operation is (+ - * /):");

    switch (operation) {
        case "+":
            document.write(number1 + number2);
            break;
        case "-":
            document.write(number1 - number2);
            break;
        case "*":
            document.write(number1 * number2);
            break;
        case "/":
            document.write(number1 / number2);
            break;
        default:
            alert("Invalid operation!");
    }
}