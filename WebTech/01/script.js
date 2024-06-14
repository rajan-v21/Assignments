function add(){
    var a = document.getElementById("Num1").value;
    var b = document.getElementById("Num2").value;
    return parseInt(a)+parseInt(b);
}
var result = parseInt(a)+parseInt(b);
document.getElementById("sum").innerHTML = result;