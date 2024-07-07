function changedata(){
    let pp = document.getElementById("pp");
    let divd = document.getElementById("divd");
    pp.innerHTML = divd.innerHTML;
    //internal style
    //pp.style.cssText = divd.style.cssText;
    //external style
    pp.style.color = window.getComputedStyle(divd).color;
    pp.style.fontSize = window.getComputedStyle(divd).fontSize;
}