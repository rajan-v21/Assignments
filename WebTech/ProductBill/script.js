function total(){
    var total=0;
    for(let i=1;i<=3;i++){
        if(document.getElementById(i).checked){
            total = +total + +document.getElementById(i).value;
        }
    }
    document.getElementById('result').innerHTML = total;
}