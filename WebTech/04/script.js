function check(){
    var pass1 = document.getElementById("pass1").value;
    var pass2 = document.getElementById("pass2").value;
    var msg = document.getElementById("msg");
    if(pass1 == pass2){
        msg.innerHTML = "Password match";
        msg.style.color = "green";
    }
    else{
        msg.innerHTML = "Password does not match";
        msg.style.color = "red";
    }
}