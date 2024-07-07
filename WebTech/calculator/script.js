function calculate() {
    var num1 = parseFloat(document.getElementById('Num1').value);
    var num2 = parseFloat(document.getElementById('Num2').value);
    var op = document.getElementById('op').value;
    var result;
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 === 0) {
                result = "Cannot divide by zero";
            } else {
                result = num1 / num2;
            }
            break;
        default:
            result = "Invalid operation";
    }

    document.getElementById('result').innerText = result;
}

function add() {
    var num1 = parseFloat(document.getElementById('Num1').value);
    var num2 = parseFloat(document.getElementById('Num2').value);
    var result = num1 + num2;
    document.getElementById('result').innerText = result;
}

function sub() {
    var num1 = parseFloat(document.getElementById('Num1').value);
    var num2 = parseFloat(document.getElementById('Num2').value);
    var result = num1 - num2;
    document.getElementById('result').innerText = result;
}

function mul() {
    var num1 = parseFloat(document.getElementById('Num1').value);
    var num2 = parseFloat(document.getElementById('Num2').value);
    var result = num1 * num2;
    document.getElementById('result').innerText = result;
}

function div() {
    var num1 = parseFloat(document.getElementById('Num1').value);
    var num2 = parseFloat(document.getElementById('Num2').value);
    var result = num1 / num2;
    document.getElementById('result').innerText = result;
}
