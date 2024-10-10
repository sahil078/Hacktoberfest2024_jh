let cur = document.querySelector(".cursor");
let main = document.querySelector("#main");

main.addEventListener("mousemove" , (details)=>{
    cur.style.top=details.y+"px";
    cur.style.left = details.x + "px";
})