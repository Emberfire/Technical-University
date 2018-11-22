let arrayA = [];
let arrayB = [];
let arrayC = [];

function fillArray() {
    for(let i = 0; i < 10; i++) {
        let a = parseInt(window.prompt("Enter a number"));
        arrayA.push(a);
    }

    printArray(arrayA);
    document.write("<br>");
}

function printArray(array) {
    document.write(array.join(";"));
}

function shiftFirstTwoElements() {
    arrayA.push(arrayA.shift());
    arrayA.push(arrayA.shift());

    printArray(arrayA);
    document.write("<br>");
}

function insertNumber() {
    let x = parseInt(window.prompt("Enter a number:"));
    arrayA.splice(3, 0, x);

    printArray(arrayA);
    document.write("<br>");
}

function deleteElement() {
    arrayA.splice(5, 1);

    printArray(arrayA);
    document.write("<br>");
}

function splitArray() {
    let arrayTemp = arrayA.slice(3, 9);
    
    printArray(arrayA);
    printArray(arrayTemp);
    document.write(" " + "<br>");
}

function concatArray() {
    arrayC = arrayA.concat(arrayB);
    
    printArray(arrayC);
    document.write("<br>");
    document.write(arrayC.length);
    document.write("<br>");
}

function swapMinMaxPlaces() {
    let max = arrayC[0];
    let maxPlace;
    let min = arrayC[0];
    let minPlace;

    for(let i = 0; i < 10; i++) {
        if (arrayC[i] >= max) {
            max = arrayC[i];
            maxPlace = i;
        }

        if (arrayC[i] <= min) {
            min = arrayC[i];
            minPlace = i;
        }
    }

    arrayC[maxPlace] = min;
    arrayC[minPlace] = max;

    printArray(arrayC);
    document.write("<br>");
}

function f() {
    
}