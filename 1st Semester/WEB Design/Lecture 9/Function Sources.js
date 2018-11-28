let sentence = prompt("Enter text:");
let symbol = prompt("Enter symbol");
let wordsInString = sentence.split(' ');

function insertString() {

    if (sentence.indexOf(symbol) !== -1) {
        document.write("The symbol "+ symbol + " is found first at index " + sentence.indexOf(symbol) + ".<br>");
        document.write("The symbol "+ symbol + " is found last at index " + sentence.lastIndexOf(symbol) + ".<br>");
    } else {
        document.write('The symbol ' + symbol + ' is not found in the text');
    }
}

function findPositionsInString() {
    let indices = [];

    for (let i = 0; i < sentence.length; i++) {
        if (sentence[i] === symbol) {
            indices.push(i);
        }
    }

    document.write("There are " + indices.length + " appearances of the symbol.<br>");
    document.write("Indices of symbol found at: " + indices + '.<br>');
}

function countWordsInString() {
    document.write("The text has " + wordsInString.length + " words.<br>");
}

function findLongestWord() {
    let longestWordIndex = 0;
    for (let i = 0; i < wordsInString.length; i++) {
        if (wordsInString[i].length >= longestWordIndex) {
            longestWordIndex = i;
        }
    }

    document.write("The longest word is "
        + wordsInString[longestWordIndex]
        + ". It has "
        + wordsInString[longestWordIndex].length
        + " letters.<br>");
}

function printWords() {
    document.write("<br>");

    for (let i = 0; i < wordsInString.length; i++) {
        document.write(wordsInString[i].fontsize(i).fontcolor("red").bold().italics() + "<br>");
    }

    document.write("<br>");
}

function printFirstHalfOfString() {
    document.write(sentence.substr(0, sentence.length / 2));
}

function printLettersInTable() {
    let temp = sentence.substr(0, sentence.length / 2);
    for (let i = 0; i < temp.length; i++) {
        let table = document.getElementById("table");
        let row = table.insertRow(i);
        let cell = row.insertCell(0);
        cell.textContent = temp[i];
    }
}