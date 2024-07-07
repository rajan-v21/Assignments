function clearErrors() {
    let errors = document.getElementsByClassName('error');

    for (let item of errors) {
        item.innerHTML = "";
    }
}

function displayError(Id, Error) {
    let element = document.getElementById(Id);
    element.getElementsByClassName('error')[0].innerHTML = Error;
}

function valid() {
    let returnval = true;

    clearErrors();

    let name = document.forms['form']['name'].value;
    if(name.trim() == "" || name.length == 0){
        displayError('name',"*input Cannot be Empty");
        returnval = false;
        return returnval;
    }
    else if (name.length < 5) {
        displayError('name', "*the length is too short");
        returnval = false;
        return returnval;
    }

    let email = document.forms['form']['email'].value;
    if (email.length > 15) {
        displayError('email', "*email length is too long");
        returnval = false;
        return returnval;
    }

    let phone = document.forms['form']['phone'].value;
    if (phone.length != 10) {
        displayError('phone', "please enter valid phone number");
        returnval = false;
        return returnval;
    }

    let password = document.forms['form']['password'].value;
    if (password.length < 8) {
        displayError('password', "*Atleast 8 characters");
        returnval = false;
        return returnval;
    }
    else if(!/[a-z]/.test(password) || !/[A-Z]/.test(password)){
            displayError('password',"password should contaier at least 1 Upper and Lower character");
            returnval = false;
           return returnval;
    }
    else if(!/[\d]/.test(password)){
        displayError('password',"password must contains at least 1 Number");
        returnval = false;
        return returnval;
    }
    else if(!/[\W]/.test(password)){
        displayError('password',"password must contains at least 1 Symbol");
        returnval = false;
        return returnval;
    }

    let confirm_password = document.forms['form']['confirm_password'].value;
    if (confirm_password != password) {
        displayError('confirm_password', "password doesn't match");
        returnval = false;
        return returnval;
    }
    return returnval;
}