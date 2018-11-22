function getDate() {
    let date = new Date();
    document.write("Today is: " + date.getDay() + "/" + date.getMonth() + "/" + date.getFullYear() + "<br>");
    document.write("The hour is: " + date.getHours() + "." + date.getMinutes() + "." + date.getSeconds());
}

function fillTable() {
    let table = document.getElementById("table");
    let row = table.insertRow(0);
    let cell1 = row.insertCell(0);
    let cell2 = row.insertCell(1);
    let cell3 = row.insertCell(2);

    cell1.textContent = "x";
    cell2.textContent = "sin(x)";
    cell3.textContent = "cos(x)";

    for(let i = 1; i <= 90; i++) {
        row = table.insertRow(i);
        cell1 = row.insertCell(0);
        cell2 = row.insertCell(1);
        cell3 = row.insertCell(2);

        cell1.textContent = i;
        cell2.textContent = Math.sin(i);
        cell3.textContent = Math.cos(i);
    }
}

function fillList() {
    let x = parseInt(window.prompt("Enter x"));
    let list = document.getElementById("list");

    for(let i = 2; i <= x; i++) {
        let entry = document.createElement('li');
        entry.textContent = i + " - " + Math.pow(i, 2);
        list.appendChild(entry);
    }
}

function weekendOrWorkDay() {
    let date = new Date();
    if (date.getDay() === 6 || date.getDay() === 7) {
        document.bgColor = "red";
        document.write("Rest");
    } else {
        document.bgColor = "blue";
        document.write("Work");
    }
}