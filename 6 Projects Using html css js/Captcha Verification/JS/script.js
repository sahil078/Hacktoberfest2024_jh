let input = document.querySelector('.brat input');
btnCheck = document.querySelector('.brat button');

let captcha = document.querySelector('.captcha i');
let info = document.querySelector('.info');

let buttonRefresh = document.querySelector('.container button');


let Char = ["A", "B", "C", "D", "E", "F", "G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z",
"a", "b", "c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z", 
0,1,2,3,4,5,6,7,8,9 ];

const randomCap = () => {
    for (let index=0; index<6; index++) {
        let randomCaptcha = Char[Math.floor(Math.random() * Char.length)]
        captcha.innerHTML += `${randomCaptcha}`;
    }
}
randomCap();

btnCheck.addEventListener('click', ()=> {
    let inputLength = input.value;
    if(inputLength == captcha.innerHTML) {
        info.style.display = "block";
        info.innerHTML = "Captcha is Matched!";
    } 
    else {
        info.style.display = "block";
        info.innerHTML = "Captcha is not Matched!";
    }
})

buttonRefresh.addEventListener('click', ()=> {
    captcha.innerHTML = "";
    randomCap();
    info.style.display = "none";
    input.value="";
}) 

setInterval(() => {
    captcha.innerHTML = "";
    randomCap();
    info.style.display = "none";
    input.value="";
}, 20000); 